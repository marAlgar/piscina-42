/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcealv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:51:42 by marcealv          #+#    #+#             */
/*   Updated: 2023/03/08 17:53:16 by marcealv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	pos;
	int	sign;
	int	num;

	pos = 0;
	sign = 1;
	num = 0;
	while ((str[pos] >= '\t' && str[pos] <= '\r') || str[pos] == ' ')
	pos++;
	while (str[pos] == '+' || str[pos] == '-')
	{
		if (str[pos] == '-')
			sign *= -1;
		pos++;
	}
	while (str[pos] >= '0' && str[pos] <= '9')
	{
		num = (str[pos] - '0') + (num * 10);
		pos++;
	}
	return (num * sign);
}

/* int	main(void)
{
	char	*s = "-1000ffgfgdff";
	int		finalres;

	finalres = ft_atoi(s);
	printf("%d\n", finalres);
}
 */