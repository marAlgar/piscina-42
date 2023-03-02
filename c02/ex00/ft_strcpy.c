/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcealv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 16:26:20 by marcealv          #+#    #+#             */
/*   Updated: 2023/03/02 11:30:28 by marcealv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	source[] = "String SOURCE";
	char	destin[] = "String DESTINATION";
	char	*dest;

	printf("ANTES\n\tsrc: %s\n\tdes: %s\n", source, destin);
	dest = ft_strcpy(destin, source);
	printf("DESPUÉS\n\tsrc: %s\n\tdes: %s\n", source, dest);
	return (0);
}
*/