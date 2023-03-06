/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcealv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:56:38 by marcealv          #+#    #+#             */
/*   Updated: 2023/03/06 16:58:11 by marcealv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	x;
	int	y;

	x = 0;
	while (dest[x] != '\0')
		x++;
	y = 0;
	while (src[y] != '\0')
	{
		dest[x + y] = src[y];
		y++;
	}
	dest[x + y] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[40] = "marcealv";
	char	dest[40] = "Mi login es: ";

	printf("String concatenado: %s", ft_strcat(dest, src));
	return (0);
}
*/