/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcealv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:19:31 by marcealv          #+#    #+#             */
/*   Updated: 2023/03/06 10:00:26 by marcealv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while (s1[x] == s2[x] && s1[x] != '\0' && s2[x] != '\0')
		x++;
	return (s1[x] - s2[x]);
}
/*
int	main(void)
{
	char	str1[] = "marcealv";
	char	str2[] = "marredon";

	if (ft_strcmp(str1, str2) == 0)
		printf("Las cadenas son iguales. \n");
	else
		printf("Las cadenas son diferentes. \n");
}
*/