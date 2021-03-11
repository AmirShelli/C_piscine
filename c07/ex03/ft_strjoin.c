/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 04:49:43 by bharghaz          #+#    #+#             */
/*   Updated: 2021/02/26 04:49:45 by bharghaz         ###   ########.fr       */
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

int		size_all(int size, char **strs)
{
	int i;
	int size_str;

	size_str = 0;
	i = 0;
	while (i < size)
	{
		size_str += ft_strlen(strs[i]);
		i++;
	}
	return (size_str);
}

char	*ft_cpy(char *str, char *join)
{
	while (*str)
	{
		*join = *str;
		join++;
		str++;
	}
	return (join);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	char	*join;
	char	*reset;
	int		i;

	join = malloc(size_all(size, strs) + (ft_strlen(sep) * size));
	reset = sep;
	result = join;
	i = 0;
	while (++i <= size)
	{
		join = ft_cpy(*strs, join);
		if (i != size)
			join = ft_cpy(sep, join);
		sep = reset;
		*join = '\0';
		strs++;
	}
	return (result);
}
