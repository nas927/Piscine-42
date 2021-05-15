/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 20:58:03 by nassim            #+#    #+#             */
/*   Updated: 2021/02/13 21:21:04 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	if (!str)
		return 1;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return 1;
	}
	return 0;
}


int		main(void)
{
	char*	nas = "&~@')<fveffrfd\nOH";
	printf("%d",ft_str_is_printable(nas));
}
