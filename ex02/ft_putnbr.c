/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlascaba <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 21:01:51 by dlascaba          #+#    #+#             */
/*   Updated: 2021/07/20 21:45:05 by dlascaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1)
}
	void ft_putnbr(int nbr)
{
	unsigned int number;
	if (nbr < 0)
	{
		ft_putchar('-');
		number = nb * -1;
	}
	else
		number = nbr;
	if (number >= 10)
		ft_putnbr(number / 10);
	ft_putchar(number % 10 + 48);
}
