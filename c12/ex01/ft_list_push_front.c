/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 13:12:37 by bharghaz          #+#    #+#             */
/*   Updated: 2021/03/04 13:12:38 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	struct s_list *head;

	head = malloc(sizeof(t_list));
	head->data = data;
	head->next = *begin_list;
	*begin_list = head;
}
