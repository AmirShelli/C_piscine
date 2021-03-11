/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 23:22:33 by bharghaz          #+#    #+#             */
/*   Updated: 2021/02/23 23:22:37 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (!power)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
