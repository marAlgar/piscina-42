/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcealv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:40:53 by marcealv          #+#    #+#             */
/*   Updated: 2023/03/01 16:14:31 by marcealv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
void	ft_sort_int_tab(int *tab, int size)
{	
	int	x;
	int	a;

	a = 0;
	while (a < (size - 1))
	{
		if (tab[a] > tab[a + 1])
		{
			x = tab[a];
			tab[a] = tab[a + 1];
			tab[a + 1] = x;
			a = 0;
		}
		else
			a++;
	}
}
/*
int	main(void)
{
	int	tab[9];
	int	i;

	tab[0] = 30;
	tab[1] = 5;
	tab[2] = 2;
	tab[3] = 3;
	tab[4] = 8;
	tab[5] = 16;
	tab[6] = 20;
	tab[7] = 24;
	tab[8] = 29;
	ft_sort_int_tab(tab, 9);
	i = 0;
	while (i < 9)
	{
		printf("%d,", tab[i++]);
	}
	return (0);
}
*/