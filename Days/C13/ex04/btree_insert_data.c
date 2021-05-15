/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 17:30:44 by nassim            #+#    #+#             */
/*   Updated: 2021/04/16 17:54:22 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		cmpf(void *data1, void *data2)
{
	if (*(int*)data2 >= *(int*)data1)
		return (1);
	else
		return (0);
}

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	t_btree *root2;

	root2 = *root;
	if (!root || !item)
		return ;
	if ((*cmpf)((*root)->item, item))
	{
		if (root2->right)
			btree_insert_data(&root2->right, item, cmpf);
		else
			root2->right = btree_create_node(item);
	}
	else
	{
		if (root2->left)
			btree_insert_data(&root2->left, item, cmpf);
		else
			root2->left = btree_create_node(item);
	}
	
}

void	afficher(t_btree *root)
{
	printf("%d\n", *(int*)root->item);
	if (root->left)
		afficher(root->left);
	if (root->right)
		afficher(root->right);
	
}

int		main(void)
{
	t_btree *root;
	int		item = 20;
	int		item1 = 15;
	int		item2 = 120;
	int		item3 = 12;
	int		item4 = 220;

	root = btree_create_node(&item);
	btree_insert_data(&root, &item1, cmpf);
	btree_insert_data(&root, &item2, cmpf);
	btree_insert_data(&root, &item3, cmpf);
	btree_insert_data(&root, &item4, cmpf);
	afficher(root->left);
}
