/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 15:21:31 by nassim            #+#    #+#             */
/*   Updated: 2021/03/30 15:42:13 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		cmp(void *a, void *b)
{
	if (*(int *)a > *(int *)b)
		return (1);
	return (0);
}

void	ft_reverse(t_list *list, int (*cmp)())
{
	void	*tmp;
	while (list->next)
	{
		if ((*cmp)(list->data, list->next->data))
		{
			tmp = list->data;
			list->data = list->next->data;
			list->next->data = tmp;
		}
		list = list->next;
	}
}

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
	t_list	*tmp;
	t_list	*list_ptr;
	t_list	*other_list_ptr;

	tmp = *begin_list1;
	while ((*begin_list1)->next != NULL)
		*begin_list1 = (*begin_list1)->next;
	(*begin_list1)->next = begin_list2;
	*begin_list1 = tmp;
	list_ptr = *begin_list1;
	other_list_ptr = (*begin_list1)->next;
	if (list_ptr != NULL && other_list_ptr != NULL)
		while (other_list_ptr)
		{
			while ((*cmp)(list_ptr->data, other_list_ptr->data))
				ft_reverse(*begin_list1, cmp);
			list_ptr = list_ptr->next;
			other_list_ptr = other_list_ptr->next;
		}
}

void	ft_list_print(t_list *begin_list)
{
	while (begin_list)
	{
		printf("%d\n", *(int *)begin_list->data);
		begin_list = begin_list->next;
	}
}

int		main(void)
{
	t_list	*list1;
	t_list	*list2;
	int data = 123;
	int data2 = 112;
	int data3 = 103;
	int data4 = 92;
	int data5 = 78;
	int data6 = 24;

	list1 = ft_create_elem(&data);
	list1->next = ft_create_elem(&data2);
	list1->next->next = ft_create_elem(&data3);
	list2 = ft_create_elem(&data4);
	list2->next = ft_create_elem(&data5);
	list2->next->next = ft_create_elem(&data6);
	ft_sorted_list_merge(&list1, list2, cmp);
	ft_list_print(list1);
}
