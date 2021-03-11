/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 23:22:33 by bharghaz          #+#    #+#             */
/*   Updated: 2021/02/23 23:22:37 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if ((nb < 0))
		return (0);
	else if (!nb)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
