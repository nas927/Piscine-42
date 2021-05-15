/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 10:54:45 by nassim            #+#    #+#             */
/*   Updated: 2021/03/27 13:06:12 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		cmp(int a, int b)
{
	if (a > b)
		return (1);
	return (0);
}

void	ft_set_at(t_list *list, int (*cmp)())
{
	int		tmp;
	t_list	*list_ptr;

	list_ptr = list->next;
	while (list->next != NULL)
	{
		if ((*cmp)(list->data, list_ptr->data))
		{
			tmp = list->data;
			list->data = list_ptr->data;
			list->next->data = tmp;
		}
		list = list->next;
		list_ptr = list_ptr->next;
	}
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *list_ptr;
	t_list *other_list_ptr;

	list_ptr = *begin_list;
	other_list_ptr = (*begin_list)->next;
	if (list_ptr->next != NULL && list_ptr != NULL)
	{
		while (other_list_ptr->next != NULL)
		{
			while ((*cmp)(list_ptr->data, other_list_ptr->data))
				ft_set_at(*begin_list, cmp);
			list_ptr = list_ptr->next;
			other_list_ptr = other_list_ptr->next;
		}
	}
}

void	ft_print_list(t_list *list)
{
	while (list)
	{
		printf("%d\n", list->data);
		list = list->next;
	}
}

int		main(void)
{
	t_list *list;

	list = ft_create_elem(3);
	list->next = ft_create_elem(2);
	list->next->next = ft_create_elem(1);
	list->next->next->next = ft_create_elem(0);
	ft_list_sort(&list, cmp);
	ft_print_list(list);
}
