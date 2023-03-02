/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcealv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:07:11 by marcealv          #+#    #+#             */
/*   Updated: 2023/03/02 16:32:56 by marcealv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	x;

	c = 0;
	x = 0;
	while (src[c] != '\0')
		c++;
	if (size != 0)
	{
		while (src[x] != '\0' && x < (size - 1))
		{
			dest[x] = src[x];
			x++;
		}
		dest[x] = '\0';
	}
	return (c);
}
/*
int	main(void)
{
	char	dest[50];
	char	*src;
	int		size;

	src = "marcealv es mi login";
	size = 9;
	printf("Entrada: %s\n", src);
	ft_strlcpy(dest, src, size);
	printf("Salida: %s\n", dest);
}
*/