/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 23:38:10 by bharghaz          #+#    #+#             */
/*   Updated: 2021/03/05 23:38:13 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int btree_level_count(t_btree *root)
{
	if (!root)
		return (0);
	else
	{
		if ((1 + btree_level_count(root->left)) >= (1 + btree_level_count(root->right)))
			return (1 + btree_level_count(root->left) );
		return (1 + btree_level_count(root->right) );
	}
}
