/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 09:33:16 by nassim            #+#    #+#             */
/*   Updated: 2021/03/27 10:13:30 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	free_fct(void *data)
{
	//free(data);
}

int		cmp(void *data, void *data_ref)
{
	return (0);
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
	t_list *list_ptr;

	list_ptr = *begin_list;
	while (list_ptr)
	{
		if (!((*cmp)(list_ptr->data, data_ref)))
			(*free_fct)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}

int		main(void)
{
	t_list *list;
	char	*data;

	data = "nassim";
	list = ft_create_elem(data);
	list->next = ft_create_elem(data);
	ft_list_remove_if(&list, data, &cmp, &free_fct);
}
