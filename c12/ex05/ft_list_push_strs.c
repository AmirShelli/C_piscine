/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 21:53:01 by bharghaz          #+#    #+#             */
/*   Updated: 2021/03/04 21:53:03 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h> 

void ft_list_push_back(t_list **begin_list, void *data)
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

t_list	*ft_create_elem(void *data)
{
	struct s_list *head;

	head = malloc(sizeof(t_list));
	head->data = data;
	head->next = NULL;
	return (head);
}

t_list *ft_list_push_strs(int size, char **strs)
{
	struct s_list *start;
	struct s_list *head;
	int i;

	i = 1;
	head = ft_create_elem(strs[i]);
	start = head;
	while (i < size)
	{	
		i++;
		head->next= ft_create_elem(strs[i]);
		head->next->next = start;
		head=head->next;
	}
	return (start);
}
