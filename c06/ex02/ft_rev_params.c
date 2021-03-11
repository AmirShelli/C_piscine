/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 19:22:32 by bharghaz          #+#    #+#             */
/*   Updated: 2021/02/25 19:22:34 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &(*str), 1);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = argc - 1;
	(void)argc;
	(void)argv;
	while (i > 0)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i--;
	}
	return (0);
}
