/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlascaba <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 18:25:07 by dlascaba          #+#    #+#             */
/*   Updated: 2021/07/20 21:23:50 by dlascaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	tot;

	i = 0;
	j = 1;
	tot = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			j *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		tot = (str[i] - '0') + (tot * 10);
		i++;
	}
	return (tot * j);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_atoi("		---+--+2147--+-ab567"));
}*/
