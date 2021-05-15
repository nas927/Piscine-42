/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 14:02:59 by nassim            #+#    #+#             */
/*   Updated: 2021/03/29 19:54:00 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_print(t_list *);

void	ft_set_at(t_list *list, int count, void *data)
{
	int		i;

	i = 0;
	while (list && ++i <= count)
		list = list->next;
	list->data = data;
}

void	**ft_list_table(t_list *list, int count)
{
	int		i;
	void		*tmp[count];
	void		**newtmp;

	i = 0;
	while (list)
	{
		tmp[i] = list->data;
		list = list->next;
		i++;
	}
	newtmp = tmp;
	return (newtmp);
}

int		ft_list_count(t_list *list)
{
	t_list	*new;
	int		i;

	i = 0;
	new = list;
	while (new && ++i)
		new = new->next;
	return (i - 1);
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	int		i;
	int		j;
	void		**tmp;

	i = ft_list_count(begin_list);
	tmp = ft_list_table(begin_list, i);
	j = 0;
	while (i >= 0)
	{
		ft_set_at(begin_list, j, tmp[i]);
		j++;
		i--;
	}
}

int		main(void)
{
	t_list *list;
	void		*data;
	int		last;
	last = 12;

	list = ft_create_elem(data);
	list->next = ft_create_elem(data);
	list->next->next = ft_create_elem(data);
	list->next->next->next = ft_create_elem(&last);
	ft_list_reverse_fun(list);
	printf("%d", *(int*)list->data);
}
