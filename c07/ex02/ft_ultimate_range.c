/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 23:27:52 by bharghaz          #+#    #+#             */
/*   Updated: 2021/02/26 23:27:55 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int *a;
	int result;

	size = max - min;
	result = size;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	a = malloc(sizeof(int) * size);
	while (--size >= 0)
	{
		max--;
		a[size] = max;
	}
	*range = a;
	return (result);
}
