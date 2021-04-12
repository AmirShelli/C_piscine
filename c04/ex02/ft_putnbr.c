/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 13:55:13 by bharghaz          #+#    #+#             */
/*   Updated: 2021/02/23 21:47:39 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &(*str), 1);
		str++;
	}
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		if (nbr == -2147483648)
			ft_putstr("-2147483648");
		else
		{
			ft_putchar('-');
			ft_putnbr(nbr * (-1));
		}
	}
	else
	{
		if (nbr > 9)
		{
			ft_putnbr(nbr / 10);
			ft_putchar('0' + (nbr % 10));
		}
		else
			ft_putchar('0' + (nbr % 10));
	}
}
