/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 13:48:34 by bharghaz          #+#    #+#             */
/*   Updated: 2021/03/04 13:48:35 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	struct s_list	*current;
	unsigned int	i;

	i = 0;
	current = begin_list;
	while (current->next != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}
