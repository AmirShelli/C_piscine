/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 19:52:00 by bharghaz          #+#    #+#             */
/*   Updated: 2021/03/05 19:52:02 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	struct s_btree *tree;

	tree = malloc(sizeof(t_btree));
	tree->item = item;
	tree->left = NULL;
	tree->right = NULL;
	return (tree);
}
