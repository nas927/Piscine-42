/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 06:30:11 by nassim            #+#    #+#             */
/*   Updated: 2021/04/16 16:56:15 by nassim           ###   ########.fr       */
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
		count_left(root->left, j);
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

void	applyfarid(void *item, int cl, int first)
{}

void	apply_this_level(t_btree *root, int j, int level, void (*applyf)(void *item, int current_level, int is_first))
{
	int		i;

	i = 0;
	if (level == j)
		applyf(root->item, j, 0);
	else
	{
		// Il va incrémenter level jusqu'à être égal à j
		if (root->left)
			apply_this_level(root->left, j, level + 1, applyf);
		if (root->right)
			apply_this_level(root->right, j, level + 1, applyf);
	}
}

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item, int current_level, int is_first))
{
	int		i;
	int		j;

	i = btree_level_count(root);
	j = 0;
	if (i > 0)
		while (j < i)
		{
			apply_this_level(root, j, 0, applyf);
			j++;
		}
}

int		main(void)
{
	t_btree *root;
	void	*item = 12;

	root = btree_create_node(item);
	root->left = btree_create_node(item);
	root->right = btree_create_node(item);
	root->right->right = btree_create_node(item);
	root->right->right->right = btree_create_node(item);
	root->right->right->right->right = btree_create_node(item);
	btree_apply_by_level(root, applyfarid);
	//printf("%d", btree_level_count(root));
}
