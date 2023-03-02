/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcealv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:51:54 by marcealv          #+#    #+#             */
/*   Updated: 2023/03/02 12:43:29 by marcealv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
int	ft_str_is_alpha(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] < 'A') || (str[x] > 'Z' && str[x] < 'a') || (str[x] > 'z'))
			return (0);
		x++;
	}
	return (1);
}
/*
int	main(void)
{
	char	a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	b[] = "^[*]";

	printf("%d\n", ft_str_is_alpha(a));
	printf("%d\n", ft_str_is_alpha(b));
	return (0);
}
*/