/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcealv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:11:28 by marcealv          #+#    #+#             */
/*   Updated: 2023/03/02 16:40:16 by marcealv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
char	*ft_strupcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'z')
			str[x] -= 32;
		x++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "marcealv";

	printf("Entrada: %s\n", str);
	ft_strupcase(str);
	printf("Salida: %s\n", str);
}
*/