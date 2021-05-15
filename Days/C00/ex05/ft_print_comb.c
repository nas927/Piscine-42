/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 13:28:20 by nassim            #+#    #+#             */
/*   Updated: 2021/02/11 20:03:16 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int a, int b, int c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0 + 48;
	b = a + 1;
	c = b + 1;
	ft_print(a,b,c);
	while (a < '7')
	{
		if (b == '8' && c == '9')
			b = a++ + 1;
		if (c == '9')
			c = b++ + 1;

		c++;
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		if (a != '7')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

int	main(void)
{
	ft_print_comb();
}
