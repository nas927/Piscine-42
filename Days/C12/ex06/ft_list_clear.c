/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 20:30:07 by nassim            #+#    #+#             */
/*   Updated: 2021/03/25 10:11:23 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//data doit être malloc sinon segfault

#include "ft_list.h"

void	free_fct(void *data)
{
	free(data);
}

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*tmp;

	if (begin_list)
		while (begin_list)
		{
			free_fct(begin_list->data);
			tmp = begin_list;
			begin_list = begin_list->next;
			free(tmp);
		}
}

