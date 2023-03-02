/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcealv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:11:20 by marcealv          #+#    #+#             */
/*   Updated: 2023/03/02 12:39:09 by marcealv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while ((src[c] != '\0') && (c < n))
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
/*
int	main(void)
{	
	unsigned int	n;
	char	src[] = "Hola";
	char	dest[] = "Agur mundo";

	n = 4;
	printf("ANTES\n\tsrc: %s\n\tdest: %s\n", src, dest);
	ft_strncpy(dest, src, n);
	printf("DESPUÉS\n\tsrc: %s\n\tdest: %s\n", src, dest);
	return (0);
}
*/