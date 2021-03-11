/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 20:23:08 by bharghaz          #+#    #+#             */
/*   Updated: 2021/02/24 20:23:11 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 1;
	if (nb <= 1)
		return (0);
	while (++i <= (nb / 2))
		if ((nb % i) == 0)
			return (0);
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (!ft_is_prime(++nb))
	{
	}
	return (nb);
}
