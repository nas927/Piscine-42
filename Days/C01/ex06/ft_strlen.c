/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 21:23:33 by nassim            #+#    #+#             */
/*   Updated: 2021/02/11 21:29:15 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}

	return (i); 
}

int		main(void)
{
	char nas[] = "nassimejndzsjddjkj²:wq";
	int a = ft_strlen(nas);

	printf("%d", a);
}
