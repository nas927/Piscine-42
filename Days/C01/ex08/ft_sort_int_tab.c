/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 19:15:56 by nassim            #+#    #+#             */
/*   Updated: 2021/02/12 20:42:43 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int  i;
	int  j;
	int  z;
	int  tmp;

	i = 0;
	j = i + 1;
	z = 0;
	while (i <= size - 1 && tab[i])
	{
		while (j <= size - 1)
		{
			if (tab[j] < tab[i])
			{
				tmp = tab[j];
				tab[j] = tab[i];
				tab[i] = tmp;
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	while (z <= size - 1)
	{
		ft_putchar(tab[z] + 48);
		z++;
	}
}

int		main(void)
{
	int  nas[4] = {8, 4, 6, 1};
	ft_sort_int_tab(nas, 4);
}
