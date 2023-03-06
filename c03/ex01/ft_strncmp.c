/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcealv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:03:39 by marcealv          #+#    #+#             */
/*   Updated: 2023/03/06 16:41:13 by marcealv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	x;

	x = 0;
	if (n == 0)
		return (0);
	while (s1[x] == s2[x] && s1[x] != '\0' && s2[x] != '\0' && x < n - 1)
		x++;
	return (s1[x] - s2[x]);
}
/*
int	main(void)
{
	char	str1[] = "marcealv";
	char	str2[] = "claudalv";

	printf("Salida %i\n", ft_strncmp(str1, str2, 5));
}
*/