/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 20:50:12 by bharghaz          #+#    #+#             */
/*   Updated: 2021/02/19 22:51:26 by bharghaz         ###   ########.fr       */
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

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &k, 1);
				if (i != '7')
					comspc();
				k++;
			}
			j++;
		}
		i++;
	}
}
