/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 10:16:16 by nassim            #+#    #+#             */
/*   Updated: 2021/03/27 10:52:04 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *tmp;
	
	tmp = *begin_list1;
	while ((*begin_list1)->next != NULL)
		*begin_list1 = (*begin_list1)->next;
	(*begin_list1)->next = begin_list2;
	*begin_list1 = tmp;
}

int		main(void)
{
	t_list *list1;
	t_list *list2;

	list1 = ft_create_elem(1);
	list1->next = ft_create_elem(15);
	list2 = ft_create_elem(2);
	list2->next = ft_create_elem(3);
	ft_list_merge(&list1, list2);
	printf("%d", list1->data);
}
