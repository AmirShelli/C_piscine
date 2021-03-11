/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 19:46:15 by bharghaz          #+#    #+#             */
/*   Updated: 2021/02/25 19:46:21 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &(*str), 1);
		str++;
	}
}

void	ft_putarr(char **arr, int size)
{
	int i;

	i = 1;
	while (i < size)
	{
		ft_putstr(arr[i]);
		write(1, "\n", 1);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]) && (*s1) && (*s2))
	{
		s1++;
		s2++;
		i++;
	}
	return (*s1 - *s2);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*aux;

	(void)argc;
	(void)argv;
	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			aux = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = aux;
			i = 1;
		}
		else
			i++;
	}
	ft_putarr(argv, argc);
	return (0);
}
