/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcealv <marcealv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:58:47 by marcealv          #+#    #+#             */
/*   Updated: 2023/02/22 11:59:31 by marcealv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_num(int num)
{
	char	c;

	if (num < 10) // si el valor es menor a 10
	{
		c = num + 48; // sumamos 48 para sacar el equivalente ascii
		write (1, "0", 1); // escribimos un 0 delante
		write (1, &c, 1); // escribimos la cifra equivalente ascii que hemos obtenido 2 lineas antes
		return ;
	}
	c = (num / 10) + 48; // sumamos 48 para sacar el equivalente ascii y sacamos el primer dígito
	write (1, &c, 1); // sacamos por pantalla el vaor que acabamos de obtener
	c = num % 10 + 48; // sumamos 48 para sacar el equivalente ascii y sacamos el último dígito
	write (1, &c, 1); // sacamos por pantalla el valor que acabamos de obtener
}

void	ft_print_comb2(void)
{
	int	p[2]; // creamos un array de elementos p

	p[0] = 0; // inicializamos el primer elemento p con valor 0
	while (p[0] < 99) // mientras el primer elemento p sea menor a 99
	{
		p[1] = p[0] + 1; // incializamos el segundo elemento p con el valor del primer elemento + 1
		while (p[1] < 100) // mientras el segundo elemento p sea menor a 100
		{
			if (p[1] > p[0]) // si el segundo elemento es mayor al primero 
			{
				write_num (p[0]); // saca por pantalla el primer elemento
				write (1, " ", 1); // seguido de un espacio
				write_num (p[1]); // seguido del segundo elemento
				if (p[0] == 98 && p[1] == 99) // si el primer elemento es 98 y el segundo elemento es 99
					write (1, ".\n", 2); // escribe . y salto de línea
				else
					write (1, ", ", 2); // sino, escribe , y espacio
			}
		p[1]++; // seguirá incrementando hasta llegar a 100
		}
	p[0]++; // seguirá incrementando hasta llegar a 99
	}
}
