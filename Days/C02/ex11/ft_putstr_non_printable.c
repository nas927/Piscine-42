/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 22:55:54 by nassim            #+#    #+#             */
/*   Updated: 2021/02/14 00:11:19 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hexa(char np)
{
	char *hex;

	hex = "0123456789abcdef";
	if (np > 16)
	{
		ft_print_hexa(np / 16);	
		ft_print_hexa(np % 16);
	}
	else
		ft_putchar(hex[np]);

}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 && str[i] > 0 || str[i] == 127)
		{
			ft_putchar('\\');
			if (str[i] < 16)
			{
				ft_putchar('0');
				ft_print_hexa(str[i]);
			}
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int		main(void)
{
	char nas[30] = "Couc\nou ca va bien ?";
	ft_putstr_non_printable(nas);
}
