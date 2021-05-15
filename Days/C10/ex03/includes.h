/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 17:52:40 by nassim            #+#    #+#             */
/*   Updated: 2021/05/15 04:31:52 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES__H
#define INCLUDE__H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

void	ft_putstr(char *);
void	ft_put_tab(wchar_t *);
void	ft_decimal_hex(long);
int		ft_convert_str(wchar_t *, long);

#endif

