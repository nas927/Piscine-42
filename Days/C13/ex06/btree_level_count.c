/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 20:11:26 by nassim            #+#    #+#             */
/*   Updated: 2021/04/13 20:43:33 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	count_right(t_btree *root, int *i)
{
	*i += 1;
	if (root->right)
		count_right(root->right, i);
}

void	count_left(t_btree *root, int *j)
{
	*j += 1;
	if (root->left)
		count_right(root->left, j);
}

int		btree_level_count(t_btree *root)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	count_right(root, &i);
	count_left(root, &j);
	if (i >= j)
		return (i);
	else
		return (j);
}

int		main(void)
{
	t_btree *root;
	void	*item;

	root = btree_create_node(item);
	root->right = btree_create_node(item);
	root->right->right = btree_create_node(item);
	root->left = btree_create_node(item);
	btree_level_count(root);
	printf("%d", btree_level_count(root));
}
