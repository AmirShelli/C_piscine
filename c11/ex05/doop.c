/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 07:16:47 by bharghaz          #+#    #+#             */
/*   Updated: 2021/03/03 07:16:49 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nbr);
int		ft_any(char **tab, int (*f)(char*));
int		ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);
void	sum(int a, int b);
void	sub(int a, int b);
void	mul(int a, int b);
void	div(int a, int b);
void	mod(int a, int b);

char	*g_op[5] = {"+", "-", "*", "/", "%%"};
void	(*g_p[5])(int, int) = {sum, sub, mul, div, mod};

int		main(int argc, char **argv)
{
	int		i;

	if (argc != 4)
		return (0);
	i = 0;
	while (g_op[i])
	{
		if (!ft_strcmp(argv[2], g_op[i]))
		{
			(*g_p[i])(ft_atoi(argv[1]), ft_atoi(argv[3]));
			return (0);
		}
		i++;
	}
	ft_putnbr(0);
}
