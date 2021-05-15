/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 20:26:27 by nassim            #+#    #+#             */
/*   Updated: 2021/03/25 10:10:16 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list  *ft_create_elem(void *);

t_list	*ft_create_elem2(void)
{
	t_list *list;

	list = malloc(sizeof(t_list));
	if (list)
		list->next = NULL;
	return (list);
}

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *list;
	t_list *new;
	
	new = begin_list;
	while (new->next != NULL)
	{
		new = new->next;
		list = new;
	}
	return (list);
}

int		main(void)
{
	t_list *list;
	list = ft_create_elem2();
	list->next = ft_create_elem2();
	
	list = ft_list_last(list);
	printf("%d", list);
}
