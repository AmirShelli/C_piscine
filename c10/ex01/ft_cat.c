/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 19:53:49 by bharghaz          #+#    #+#             */
/*   Updated: 2021/03/01 19:53:51 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	read_file(int file)
{
	int		count;
	char	data[10];

	if (file != (-1))
	{
		while ((count = read(file, data, 9)))
		{
			data[count] = '\0';
			if (count == -1)
				ft_putstr(strerror(errno));
			else
				ft_putstr(data);
		}
		close(file);
	}
	else
		ft_putstr(strerror(errno));
}

int		main(int argc, char **argv)
{
	int		filep;
	int		elem;
	char	buff[4000];
	int		res;

	elem = 0;
	while (elem < argc)
	{
		if ((argv[elem][0] == '-') || (argc = 1))
			while ((res = read(1, buff, 10)))
			{
				buff[res] = '\0';
				ft_putstr(buff);
			}
		else
		{
			filep = open(argv[elem], O_RDONLY);
			read_file(filep);
		}
		elem++;
	}
}
