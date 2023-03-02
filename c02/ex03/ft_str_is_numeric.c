/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcealv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:14:05 by marcealv          #+#    #+#             */
/*   Updated: 2023/03/02 12:43:40 by marcealv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
int	ft_str_is_numeric(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] < '0') || (str[x] > '9'))
			return (0);
		x++;
	}
	return (1);
}
/*
int	main(void)
{
	char	a[] = "0123456789";
	char	b[] = "sdfljfdk";

	printf("%d\n", ft_str_is_numeric(a));
	printf("%d\n", ft_str_is_numeric(b));
	return (0);
}
*/