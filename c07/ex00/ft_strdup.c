/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 23:21:30 by bharghaz          #+#    #+#             */
/*   Updated: 2021/02/25 23:21:32 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *src)
{
	int i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char *ft_strdup(char *src)
{
	char *copy;
	char *aux;
	
	aux = malloc(ft_strlen(src));
	copy = aux;
	while (*src)
	{
		*aux = *src;
		aux++;
		src++;
	}
	*aux = '\0';
	return (copy);
}