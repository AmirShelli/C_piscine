/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 21:08:13 by bharghaz          #+#    #+#             */
/*   Updated: 2021/02/19 22:50:58 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	comspc(void)
{
	char com;
	char spc;

	com = ',';
	spc = ' ';
	write(1, &com, 1);
	write(1, &spc, 1);
}

void	ftwr(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
}

void	ft_print_comb2(void)
{
	char i;
	char j;
	char k;
	char l;

	i = '0' - 1;
	while (++i <= '9')
	{
		j = '0' - 1;
		while (++j <= '9')
		{
			k = i - 1;
			while (++k <= '9')
			{
				l = j;
				while (++l <= '9')
				{
					ftwr(i, j, k, l);
					if (i != '9' && j != '7' && k != '9' && l != '9')
						comspc();
				}
			}
		}
	}
}
