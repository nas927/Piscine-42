/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 20:02:03 by nassim            #+#    #+#             */
/*   Updated: 2021/04/13 20:13:01 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		cmpf(void *data, void *data_ref)
{
	if (data == data_ref)
		return (1);
	else
		return (0);
}

void	*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *))
{
	if (root->left)
		btree_search_item(root, data_ref, cmpf);
	if ((*cmpf)(root->item, data_ref))
		return (root->item);
	if (root->right)
		btree_search_item(root, data_ref, cmpf);
	return (NULL);
}

int		main(void)
{
	t_btree *root;
	int		item = 12;
	int		item2 = 2;

	root = btree_create_node(&item);
	printf("%p", btree_search_item(root, &item2, cmpf));
}
