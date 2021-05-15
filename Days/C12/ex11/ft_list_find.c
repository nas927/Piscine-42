/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 09:07:22 by nassim            #+#    #+#             */
/*   Updated: 2021/03/27 09:30:43 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		cmp(void *data, void *data_ref)
{
	char	*d1;
	char	*d2;

	d1 = (char *)data;
	d2 = (char *)data_ref;
	if (d1[0] != d2[0])
		return (1);
	return (0);
}

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *list_ptr;

	list_ptr = begin_list;
	while (list_ptr)
	{
		if (!((*cmp)(list_ptr->data, data_ref)))
			return (list_ptr);
		list_ptr = list_ptr->next;
	}
	return (list_ptr->next);
}

int		main(void)
{
	char	*data = "nassim";
	char	*data2 = "brenda";
	t_list *list;
	list = ft_create_elem(data);
	list->next = ft_create_elem(data2);
	t_list *new = ft_list_find(list, data2, cmp);
	printf("%s", (char *)new->data);
}
