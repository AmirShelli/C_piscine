/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 23:36:42 by bharghaz          #+#    #+#             */
/*   Updated: 2021/02/27 23:36:46 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int		ft_strlen(char *src)
{
	int	count;

	count = 0;
	while (src[count])
		count++;
	return (count);
}

char	*ft_strdup(char *src)
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

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*tab;
	int					count;

	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (NULL);
	count = 0;
	while (*av)
	{
		tab[count].str = *av;
		tab[count].copy = ft_strdup(*av);
		tab[count].size = ft_strlen(*av);
		av++;
		count++;
	}
	tab[count].str = 0;
	return (tab);
}
