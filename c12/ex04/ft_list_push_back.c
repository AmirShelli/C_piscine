/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 21:49:56 by bharghaz          #+#    #+#             */
/*   Updated: 2021/03/04 21:50:00 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	struct s_list *current;
	struct s_list *head;

	head = malloc(sizeof(t_list));
	head->data = data;
	head->next = NULL;
	current = *begin_list;
	while (current->next != NULL)
		current = current->next;
	current->next = head;
}
