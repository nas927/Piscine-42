/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 15:22:12 by nassim            #+#    #+#             */
/*   Updated: 2021/04/16 17:20:19 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*tr;

	tr = malloc(sizeof(t_btree));
	if (!tr)
		return (NULL);
	tr->left = NULL;
	tr->right = NULL;
	tr->item = item;
	return (tr);
}

void	applyf(int item)
{
	item++;
}
