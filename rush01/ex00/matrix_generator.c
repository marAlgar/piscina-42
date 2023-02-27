/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_generator.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivromero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 11:07:55 by iprado-l          #+#    #+#             */
/*   Updated: 2023/02/26 15:53:38 by ivromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_matrix(int matrix[4][4], int params_nm[16]);
void	print_matrix(int matrix[4][4]);
int		g_matrix[4][4];

int	is_valid(int row, int col, int value)
{
	int	c_col;
	int	c_row;

	c_col = 0;
	while (c_col < 4)
	{
		if (g_matrix[row][c_col] == value)
		{
			return (0);
		}
		c_col++;
	}
	c_row = 0;
	while (c_row < 4)
	{
		if (g_matrix[c_row][col] == value)
		{
			return (0);
		}
		c_row++;
	}
	return (1);
}

void	comb_generator(int row, int col, int params_nm[16], int *found)
{
	int	c_row;

	if (row == 4)
	{
		if (*found == 0 && check_matrix(g_matrix, params_nm))
		{
			print_matrix(g_matrix);
			*found = 1;
		}
		return ;
	}
	c_row = 1;
	while (c_row <= 4)
	{
		if (is_valid(row, col, c_row))
		{
			g_matrix[row][col] = c_row;
			if (col == 4 - 1)
				comb_generator(row + 1, 0, params_nm, found);
			else
				comb_generator(row, col + 1, params_nm, found);
			g_matrix[row][col] = 0;
		}
		c_row++;
	}
}

void	matrix_generator(int params_nm[16])
{
	int	found;

	found = 0;
	comb_generator(0, 0, params_nm, &found);
	if (found == 0)
		write (1, "Error\n", 6);
}
