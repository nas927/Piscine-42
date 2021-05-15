/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 13:41:25 by nassim            #+#    #+#             */
/*   Updated: 2021/02/09 15:17:12 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (a < 98)
	{
		if (b == 99)
			b = ++a + 1;
		else
			b++;

		ft_putchar(a / 10 + 48);
		ft_putchar(a % 10 + 48);
		ft_putchar(' ');
		ft_putchar(b / 10 + 48);
		ft_putchar(b % 10 + 48);
		if(a < 98)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

int	main(void)
{
	ft_print_comb2();
}
