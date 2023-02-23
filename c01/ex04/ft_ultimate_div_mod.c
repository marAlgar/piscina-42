/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcealv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:54:33 by marcealv          #+#    #+#             */
/*   Updated: 2023/02/23 17:54:35 by marcealv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*
int	main(void)
{
	int	a;
	int	b;

	a = 25;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n%d\n", a, b);
	return (0);
}
*/