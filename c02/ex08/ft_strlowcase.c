/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcealv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:37:26 by marcealv          #+#    #+#             */
/*   Updated: 2023/03/02 16:39:44 by marcealv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
char	*ft_strlowcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
			str[x] += 32;
		x++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "MARCEALV";

	printf("Entrada: %s\n", str);
	ft_strlowcase(str);
	printf("Salida: %s\n", str);
}
*/