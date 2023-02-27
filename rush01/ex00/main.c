/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivromero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 15:29:12 by ivromero          #+#    #+#             */
/*   Updated: 2023/02/26 15:53:31 by ivromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		params_to_array(char **params, int params_nm[16]);
void	print_matrix(int matrix[4][4]);
int		check_params(int params_nm[16]);
void	matrix_generator(int params_nm[16]);
void	print_error(void);

int	main(int n_params, char **params)
{
	int	params_nm[16];

	if (n_params > 2 || params[1] == NULL)
		print_error();
	else if (params_to_array(params, params_nm) == -1)
		print_error();
	else if (check_params(params_nm) == -1)
		print_error();
	else
		matrix_generator(params_nm);
}

void	print_error(void)
{
	write (1, "Error\n", 6);
}

int	params_to_array(char **params, int params_nm[16])
{
	int	cont;

	cont = 0;
	while (cont < 16)
	{
		if (params[1][(cont * 2) + 1] != ' ' && cont != 15)
			return (-1);
		if (!(params[1][cont * 2] - 48 > 0 && params[1][cont * 2] - 48 < 5))
			return (-1);
		params_nm[cont] = params[1][cont * 2] - 48;
		cont++;
	}
	if (params[1][31] != '\0')
		return (-1);
	return (0);
}
