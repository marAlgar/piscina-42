/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiez-p <madiez-p@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:44:05 by marcealv          #+#    #+#             */
/*   Updated: 2023/02/19 21:15:22 by madiez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

// function to print a "rush pattern" of size x by y
void	rush(int x, int y)
{
	int	line;
	int	column;

	line = 0;
	while (++line <= y && (x > 0 && y > 0))
	{
		column = 0;
		while (++column <= x)
		{
			if (line == 1 || line == y)
			{
				if (column == 1)
					ft_putchar('A');
				else if (column == x)
					ft_putchar('C');
				else
					ft_putchar('B');
			}
			else if (column == 1 || column == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
