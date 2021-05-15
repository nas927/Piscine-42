/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 08:53:31 by nassim            #+#    #+#             */
/*   Updated: 2021/03/27 09:06:32 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	f(void *data)
{
	printf("yo\n");
}

int		cmp(void *data, void *data_ref)
{
	return (0);
}

void	ft_list_foreach_if(t_list *begin_list, void (*f)(), void *data_ref, int (*cmp)())
{
	t_list *list_ptr;
	list_ptr = begin_list;
	while (list_ptr)
	{
		if (!((*cmp)(list_ptr->data, data_ref)))
			(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}

int		main(void)
{
	t_list *list;
	char	*data = "nassim";
	char	*data_ref = "brenda";
	list = ft_create_elem(data);
	list->next = ft_create_elem(data);
	ft_list_foreach_if(list, f, data_ref, cmp);
}
