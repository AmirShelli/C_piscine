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

	count = 1;
	if (file != (-1))
	{
		while (count > 0)
		{
			count = read(file, data, 9);
			data[count] = '\0';
			if (count == -1)
				ft_putstr("Cannot read file.\n");
			else
				ft_putstr(data);
		}
	}
	else
		ft_putstr("Cannot read file.\n");
}

int		main(int argc, char **argv)
{
	int		filep;

	filep = 0;
	if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
	{
		filep = open(argv[1], O_RDONLY);
		read_file(filep);
		close(filep);
	}
}
