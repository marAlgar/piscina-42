/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcealv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:49:37 by marcealv          #+#    #+#             */
/*   Updated: 2023/03/02 13:10:52 by marcealv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
int	ft_str_is_printable(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] < 32) || (str[x] > 126))
			return (0);
		x++;
	}
	return (1);
}
/*
int	main(void)
{
	char	a[] = "marcealv";
	char	b[] = "\t tab";

	printf("%d\n", ft_str_is_printable(a));
	printf("%d\n", ft_str_is_printable(b));
	return (0);
}
*/