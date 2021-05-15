/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 03:35:15 by nassim            #+#    #+#             */
/*   Updated: 2021/03/25 10:40:35 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(int);

int		ft_count_list(t_list *list)
{
	t_list *new;
	int		i;

	i = 0;
	new = list;
	while (new)
	{
		new = new->next;
		i++;
	}
	return (i);
}

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list	*new;
	t_list	*tmp;
	int		i;
	int		j;

	i = -1;
	new = begin_list;
	j = ft_count_list(new);
	if (nbr < 0)
		return (NULL);
	else if (nbr == 0 && j > 0)
		return (begin_list);
	else if (nbr >= j)
		return (NULL);
	while (++i <= nbr)
	{
		tmp = new;
		new = new->next;
	}
	return (tmp);
}

int		main(void)
{
	t_list *list;
	t_list *res;
	list = ft_create_elem(15);
	list->next = ft_create_elem(20);
	list->next->next = ft_create_elem(3);
	res = ft_list_at(list, 3);
	printf("%d\n", res);
}
