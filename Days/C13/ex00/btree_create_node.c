/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 15:22:12 by nassim            #+#    #+#             */
/*   Updated: 2021/04/06 15:27:44 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_tree	*btree_create_node(void *item)
{
	t_tree	*tr;

	tr = malloc(sizeof(t_tree));
	if (!tr)
		return (NULL);
	tr->left = NULL;
	tr->right = NULL;
	tr->item = item;
	return (tr);
}

int		main(void)
{
	t_tree	*tr;
	void	*item;

	tr = btree_create_node(item);
	printf("%p", tr->item);
}
