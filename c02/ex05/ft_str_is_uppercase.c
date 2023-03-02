/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcealv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:46:30 by marcealv          #+#    #+#             */
/*   Updated: 2023/03/02 12:59:06 by marcealv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
int	ft_str_is_uppercase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] < 'A') || (str[x] > 'Z'))
			return (0);
		x++;
	}
	return (1);
}
/*
int	main(void)
{
	char	a[] = "marcealv";
	char	b[] = "MARCEALV";

	printf("%d\n", ft_str_is_uppercase(a));
	printf("%d\n", ft_str_is_uppercase(b));
	return (0);
}
*/