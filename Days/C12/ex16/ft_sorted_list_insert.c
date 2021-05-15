/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:52:46 by nassim            #+#    #+#             */
/*   Updated: 2021/03/30 15:20:29 by nassim           ###   ########.fr       */
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
	int		i;
	void	*tmp;

	i = 0;
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

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*list_ptr;
	t_list	*other_list_ptr;
	t_list	*tmp;

	tmp = *begin_list;
	while ((*begin_list)->next != NULL)
		*begin_list = (*begin_list)->next;
	(*begin_list)->next = ft_create_elem(data);
	*begin_list = tmp;
	list_ptr = *begin_list;
	other_list_ptr = (*begin_list)->next;
	if (list_ptr != NULL && other_list_ptr != NULL)
		while (other_list_ptr)
		{
			while ((*cmp)(list_ptr->data, other_list_ptr->data))
				ft_reverse(*begin_list, cmp);
			list_ptr = list_ptr->next;
			other_list_ptr = other_list_ptr->next;
		}
}

void	ft_list_print(t_list *list)
{
	while (list)
	{
		printf("%d\n", *(int*)list->data);
		list = list->next;
	}
}

int		main(void)
{
	t_list *list;
	int	data = 12;
	int	data2 = 15;
	int	data3 = 30;
	int	data4 = 1;
	int	data7 = 3;
	int	data6 = 2;
	list = ft_create_elem(&data3);
	list->next = ft_create_elem(&data2);
	list->next->next = ft_create_elem(&data);
	list->next->next->next = ft_create_elem(&data7);
	list->next->next->next->next = ft_create_elem(&data6);
	//ft_list_print(list);
	ft_sorted_list_insert(&list, &data4, cmp);
	//ft_reverse(list, cmp);
	ft_list_print(list);
}
