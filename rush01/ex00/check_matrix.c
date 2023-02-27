/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivromero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 15:27:19 by ivromero          #+#    #+#             */
/*   Updated: 2023/02/26 15:19:25 by ivromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_top(int matrix[4][4], int params_nm[16])
{
	int	row;
	int	height;
	int	visible;
	int	param_init;
	int	c_col;

	param_init = -1;
	c_col = -1;
	while (++param_init < 4)
	{
		row = 0;
		visible = 1;
		height = matrix[0][++c_col];
		while (++row <= 3)
		{
			if (matrix[row][c_col] > height)
			{
				height = matrix[row][c_col];
				visible++;
			}
		}
		if (visible != params_nm[param_init])
			return (0);
	}
	return (1);
}

int	check_down(int matrix[4][4], int params_nm[16])
{
	int	row;
	int	height;
	int	visible;
	int	param_init;
	int	c_col;

	param_init = 3;
	c_col = -1;
	while (++param_init < 8)
	{
		row = 4;
		visible = 1;
		height = matrix[3][++c_col];
		while (--row >= 0)
		{
			if (matrix[row][c_col] > height)
			{
				height = matrix[row][c_col];
				visible++;
			}
		}
		if (visible != params_nm[param_init])
			return (0);
	}
	return (1);
}

int	check_left(int matrix[4][4], int params_nm[16])
{
	int	col;
	int	height;
	int	visible;
	int	param_init;
	int	c_row;

	param_init = 7;
	c_row = -1;
	while (++param_init < 12)
	{
		col = 0;
		visible = 1;
		height = matrix[++c_row][0];
		while (++col <= 3)
		{
			if (matrix[c_row][col] > height)
			{
				height = matrix[c_row][col];
				visible++;
			}
		}
		if (visible != params_nm[param_init])
			return (0);
	}
	return (1);
}

int	check_right(int matrix[4][4], int params_nm[16])
{
	int	col;
	int	height;
	int	visible;
	int	param_init;
	int	c_row;

	param_init = 11;
	c_row = -1;
	while (++param_init < 16)
	{
		col = 4;
		visible = 1;
		height = matrix[++c_row][3];
		while (--col >= 0)
		{
			if (matrix[c_row][col] > height)
			{
				height = matrix[c_row][col];
				visible++;
			}
		}
		if (visible != params_nm[param_init])
			return (0);
	}
	return (1);
}

int	check_matrix(int matrix[4][4], int params_nm[16])
{
	if ((check_top(matrix, params_nm)) && \
	(check_down(matrix, params_nm)) && \
	(check_left(matrix, params_nm)) && \
	(check_right(matrix, params_nm)))
	{
		return (1);
	}
	return (0);
}
