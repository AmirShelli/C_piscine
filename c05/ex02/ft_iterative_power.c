/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 23:34:32 by bharghaz          #+#    #+#             */
/*   Updated: 2021/02/23 23:34:36 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	long int res;

	res = nb;
	if (power == 0)
		return (1);
	if ((power < 0))
		return (0);
	while (--power > 0)
	{
		res *= nb;
	}
	return (res);
}
