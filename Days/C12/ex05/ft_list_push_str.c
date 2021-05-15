/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 19:27:17 by nassim            #+#    #+#             */
/*   Updated: 2021/03/25 10:11:06 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(int size)
{
	t_list *list;
	list = malloc(sizeof(t_list));
	if (list)
	{
		list->next = NULL;
		if (!(list->strs = (char**)malloc(sizeof(char*) * (size))))
			return (NULL);
	}
	return (list);
}

t_list *ft_list_push_str(int size, char **strs)
{
	int		i;

	t_list *list;
	list = ft_create_elem(size);
	i = 0;
	if (size > 0)
		while (i < size)
			list->strs[i++] = strs[i];
	return (list);
}

int		main(void)
{
	t_list *list;
	char *string[2];

	string[0] = "nassim";
	string[1] = "brenda";
	list = ft_list_push_str(2, string);
	printf("%s", list->strs[0]);
}





