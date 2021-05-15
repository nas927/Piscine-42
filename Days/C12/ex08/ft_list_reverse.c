/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 04:08:16 by nassim            #+#    #+#             */
/*   Updated: 2021/03/27 08:26:20 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(int);

void	ft_list_reverse(t_list **begin_list)
{
	t_list *tmp;
	t_list *next;

	next = NULL;
	while (*begin_list)
	{
		tmp = (*begin_list)->next;
		(*begin_list)->next = next;
		next = *begin_list;
		*begin_list = tmp;
	}
	*begin_list = next;
}

int		main(void)
{
	t_list *list;
	list = ft_create_elem(10);
	list->next = ft_create_elem(15);
	list->next->next = ft_create_elem(20);
	ft_list_reverse(&list);
	printf("%d", list->data);
}
