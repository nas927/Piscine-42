/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 20:11:14 by nassim            #+#    #+#             */
/*   Updated: 2021/03/25 10:01:41 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_create_elem(void *);

int		ft_list_size(t_list *begin_list)
{
	t_list *list;
	int		i;

	i = 0;
	list = begin_list;
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}

int		main(void)
{
	t_list *list;
	void *data;
	list = ft_create_elem(data);
	list->next = ft_create_elem(data);
	list->next->next = ft_create_elem(data);
	printf("%d", ft_list_size(list));
}
