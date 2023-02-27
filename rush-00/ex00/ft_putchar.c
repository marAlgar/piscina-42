/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcealv <marcealv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:44:28 by marcealv          #+#    #+#             */
/*   Updated: 2023/02/19 20:25:52 by marcealv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

// function to print a single character to standard ouput
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
