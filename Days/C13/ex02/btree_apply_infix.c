/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 15:43:58 by nassim            #+#    #+#             */
/*   Updated: 2021/04/16 17:25:51 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root->left)
		btree_apply_prefix(root->left, (*applyf));
	(*applyf)(root->item);
	printf("%d\n", *(int*)root->item);
	if (root->right)
		btree_apply_prefix(root->right, (*applyf));
}

int		main(void)
{
	t_btree	*tr;
	int		item = 0;
	int		item1 = 1;
	int		item2 = 2;
	int		item3 = 3;

	tr = btree_create_node(&item);
	tr->left = btree_create_node(&item1);
	tr->left->left = btree_create_node(&item2);
	tr->right = btree_create_node(&item3);
	btree_apply_prefix(tr, applyf);
}
