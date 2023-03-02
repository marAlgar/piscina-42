/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcealv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:42:23 by marcealv          #+#    #+#             */
/*   Updated: 2023/03/02 16:32:26 by marcealv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
char	*ft_strcapitalize(char *str)
{
	int	c;
	int	pos;

	c = 0;
	pos = 0;
	while (str[c] != '\0')
	{
		if (pos == 0 && (str[c] >= 'a' && str[c] <= 'z'))
		{
			str[c] -= 32;
			pos++;
		}
		else if (pos > 0 && (str[c] >= 'A' && str[c] <= 'Z'))
			str[c] += 32;
		else if ((str[c] < '0') || (str[c] > '9' && str[c] < 'A')
			|| (str[c] > 'Z' && str[c] < 'a') || (str[c] > 'z'))
			pos = 0;
		else
			pos++;
		c++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "mi login es marcealv";

	printf("Entrada: %s\n\n", str);
	ft_strcapitalize(str);
	printf("Salida: %s\n", str);
}
*/