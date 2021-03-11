/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 23:54:49 by bharghaz          #+#    #+#             */
/*   Updated: 2021/02/25 23:54:52 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int size;
	int *result;

	size = max - min;
	if (min >= max)
		return (NULL);
	result = malloc(sizeof(int) * size);
	while (--size >= 0)
	{
		max--;
		result[size] = max;
	}
	return (result);
}
