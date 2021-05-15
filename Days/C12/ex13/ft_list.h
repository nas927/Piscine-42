/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 12:14:54 by nassim            #+#    #+#             */
/*   Updated: 2021/03/27 10:22:45 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>
# include <stddef.h>

typedef struct		s_list
{
	struct s_list	*begin;
	struct s_list	*next;
	int				data;
}					t_list;

t_list *ft_create_elem(int);

#endif
