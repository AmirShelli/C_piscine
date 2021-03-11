/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 22:15:57 by bharghaz          #+#    #+#             */
/*   Updated: 2021/02/23 22:38:38 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int res;

	res = nb;
	if (nb == 0)
		return (1);
	if ((nb < 0))
		return (0);
	else
		while (--nb > 1)
			res *= nb;
	return (res);
}
