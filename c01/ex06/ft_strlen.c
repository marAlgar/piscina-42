/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcealv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 11:07:11 by marcealv          #+#    #+#             */
/*   Updated: 2023/02/28 12:45:28 by marcealv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}
/*
int	main(void)
{
	char	*s;

	s = "marcealv";
	printf("%d\n", ft_strlen(s));
}
*/