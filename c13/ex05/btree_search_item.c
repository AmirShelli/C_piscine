/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 22:49:39 by bharghaz          #+#    #+#             */
/*   Updated: 2021/03/05 22:49:41 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root,
	char *data_ref, int (*cmpf)(char *, char *))
{
	if (!(root))
		return (NULL);
	if (cmpf(root->item, data_ref) < 0)
		return (btree_search_item(root->left, data_ref, cmpf));
	else
	{
		if (cmpf(root->item, data_ref) == 0)
			return (root);
		else
			return (btree_search_item(root->right, data_ref, cmpf));
	}
}
