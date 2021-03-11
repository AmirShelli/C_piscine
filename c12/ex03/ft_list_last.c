/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:03:36 by bharghaz          #+#    #+#             */
/*   Updated: 2021/03/04 14:03:38 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_last(t_list *begin_list)
{
	struct s_list *current;

	current = begin_list;
	while (current->next != NULL)
		current = current->next;
	return (current);
}
