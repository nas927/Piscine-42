/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 12:14:54 by nassim            #+#    #+#             */
/*   Updated: 2021/03/30 13:58:58 by nassim           ###   ########.fr       */
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
	void			*data;
}					t_list;

t_list *ft_create_elem();

#endif
