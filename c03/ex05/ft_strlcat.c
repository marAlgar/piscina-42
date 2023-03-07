/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcealv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 11:56:08 by marcealv          #+#    #+#             */
/*   Updated: 2023/03/07 13:28:54 by marcealv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	y;
	unsigned int	z;

	x = 0;
	while (dest[x] != '\0')
		x++;
	y = 0;
	while (src[y] != '\0' && y < size)
	{
		dest[x + y] = src[y];
		y++;
	}
	dest[x + y] = '\0';
	z = 0;
	while (src[z] != '\0')
		z++;
	return (z + size);
}

int	main(void)
{
	char			src[] = "marcealv";
	char			dest[] = "mi login";
	unsigned int	nb = 4;

	printf("Str: %u\n", ft_strlcat(dest, src, nb));
	return (0);
}
