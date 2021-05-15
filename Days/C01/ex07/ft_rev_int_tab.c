/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 21:31:17 by nassim            #+#    #+#             */
/*   Updated: 2021/02/12 20:07:43 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int z;
	int tmp;

	i = 0;
	z = 0;
	j = size - 1;
	while (i < j && tab[i])
	{
		tmp = tab[j];
		tab[j] = tab[i];
		tab[i] = tmp;
		i++;
		j--;
	}
	while (z <= size - 1)
	{
		ft_putchar(tab[z] + 48);
		z++;
	}
}

int		main(void)
{
	int  nas[4];
	nas[0] = 1;
	nas[1] = 2;
	nas[2] = 5;
	nas[3] = 4;
	ft_rev_int_tab(nas, 4);
}
