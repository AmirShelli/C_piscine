/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 11:52:03 by bharghaz          #+#    #+#             */
/*   Updated: 2021/03/04 11:52:06 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	struct s_list *head;

	head = malloc(sizeof(t_list));
	head->data = data;
	head->next = NULL;
	return (head);
}
