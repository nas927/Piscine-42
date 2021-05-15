/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 12:23:08 by nassim            #+#    #+#             */
/*   Updated: 2021/03/31 16:58:50 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define CONST 0.0000000000000000000000000016605

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(float nb)
{
	if (nb >= 0 && nb < 10)
		ft_putchar(nb + '0');
	else if (nb < 0 && nb > -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		ft_putnbr((int)nb / 10);
		ft_putnbr((int)nb % 10);
	}
}

int		main(void)
{
	int hey = 05;
	ft_putnbr((float)hey);
}
