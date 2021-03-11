/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 20:24:38 by bharghaz          #+#    #+#             */
/*   Updated: 2021/03/05 20:24:39 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root,
	void *item, int (*cmpf)(void *, void *))
{
	if ((*root))
	{
		if (cmpf(item, (*root)->item) >= 0)
			btree_insert_data(&((*root)->right), item, cmpf);
		else
			btree_insert_data(&((*root)->left), item, cmpf);
	}
	else
		(*root) = btree_create_node(item);
}
