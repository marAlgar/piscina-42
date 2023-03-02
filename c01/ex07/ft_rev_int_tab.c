/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcealv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 11:50:23 by marcealv          #+#    #+#             */
/*   Updated: 2023/03/01 15:54:43 by marcealv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	temp;

	a = 0;
	while (a < (size / 2))
	{
		temp = tab[a];
		tab[a] = tab[size - 1 - a];
		tab[size - 1 - a] = temp;
		a++;
	}
}
/*
int	main(void)
{
	int	tab[6];
	int	size;	

	size = 6;
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;
	tab[5] = 6;
	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d", tab[0], \
	tab[1], tab[2], tab[3], tab[4], tab[5]);
	return (0);
}
*/