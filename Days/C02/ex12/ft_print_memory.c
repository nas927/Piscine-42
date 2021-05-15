/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 13:41:14 by nassim            #+#    #+#             */
/*   Updated: 2021/05/15 05:18:57 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_convert_to_hex(long long int nb)
{
	unsigned const char	*hexa;

	hexa = "0123456789abcdef";
	if (nb >= 0 && nb <= 16)
		ft_putchar(hexa[nb]);
	else
	{
		ft_convert_to_hex(nb / 16);
		ft_convert_to_hex(nb % 16);
	}
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] && i < 16)
	{
		if (str[i] < 32 || str[i] > 127)
		{
			ft_putchar('.');
			i++;
		}
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_convert_str(char *str)
{
	int		i;

	i = 0;
	while (str[i] && i < 16)
	{
		if (str[i] >= 0 && str[i] < 16)
			ft_putchar('0');
		if(str[i] >= 0)
			ft_convert_to_hex(str[i]);
		else
			ft_putstr("00");
		if (i % 2 && i != 0)
			ft_putchar(' ');
		i++;
	}
	if (i % 2)
		ft_putstr("00");
	while (++i < 17)
	{
		if (i % 2)
			ft_putstr(" ");
		ft_putstr("  ");
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	j = 0;
	if (size == 0)
		return (0);
	p = (char*)addr;
	while (p[i] && i < size)
	{
		if (p[i] >= 0 && p[i] < 16)
			ft_putchar('0');
		ft_convert_to_hex((long long)&p[i]);
		ft_putstr(": ");
		ft_convert_str(p + i);
		ft_putstr(p + i);
		ft_putchar('\n');
		i += 16;
	}
	return (addr);
}

int		main(void)
{
	char *nas = "Bonjours les amis comment allez vous 	hey je suis content de vous voir zebi testons les éèâ&\0";
	char *str = "Bonjours les amindbhejdz c'est fou tout ce qu'on peut faire avec print_memory lolilolo\0";
	ft_print_memory(nas, 100);
}
