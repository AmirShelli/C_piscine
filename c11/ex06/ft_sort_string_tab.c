/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 01:25:34 by bharghaz          #+#    #+#             */
/*   Updated: 2021/03/03 01:25:39 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	t_sort_string_tab(char **tab)
{
	int		i;
	char	*aux;

	i = 0;
	while (tab[i + 1])
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			aux = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = aux;
			i = 1;
		}
		else
			i++;
	}
}
