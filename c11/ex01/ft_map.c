/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 16:09:02 by bharghaz          #+#    #+#             */
/*   Updated: 2021/03/02 16:09:04 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *result;
	int i;

	result = malloc(sizeof(tab));
	i = 0;
	printf("size of result inside of function: %lu\n", sizeof(tab));
	while (i < length)
	{
		result[i] = f(tab[i]);
		i++;
	}
	return (result);
}
