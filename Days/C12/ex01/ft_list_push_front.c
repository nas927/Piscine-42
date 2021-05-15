/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 17:41:00 by nassim            #+#    #+#             */
/*   Updated: 2021/03/25 10:00:26 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *);

void	ft_list_push_front(t_list **begin_list, void *data)
{
	(*begin_list) = ft_create_elem(data);
	(*begin_list)->begin = ft_create_elem(data);
	(*begin_list)->next = NULL;
}

void	ft_print_list(t_list *L, void *data)
{
	t_list *list;
	list = L;
	while (list)
	{
		printf("%d\n", *(int*)list->data);
		list = list->begin;
	}
}

int		main(void)
{
	t_list *list;
	int	data;
	data = 15;
	ft_list_push_front(&list, &data);
	ft_print_list(list, &data);
}
