/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 21:48:09 by bharghaz          #+#    #+#             */
/*   Updated: 2021/02/23 22:07:48 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_num(char c)
{
	return ((c >= '0') && (c <= '9'));
}

is_alpha(char c)
{
	return (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')));
}

int		ft_atoi(char *str)
{
	int sign;
	int num;

	sign = 1;
	num = 0;

	while (*str && (!is_num(*str)) && (!is_alpha(*str)))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && is_num(*str))
	{
		if (is_num(*str))
		{
			num = num * 10 + (*str - 48);
		}
		str++;
	}
	return (sign * num);
}
