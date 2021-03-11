/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 01:26:07 by bharghaz          #+#    #+#             */
/*   Updated: 2021/03/03 01:26:10 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	t_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	char	*aux;

	i = 0;
	while (tab[i + 1])
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
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
