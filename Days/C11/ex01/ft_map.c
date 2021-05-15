/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 17:58:49 by nassim            #+#    #+#             */
/*   Updated: 2021/03/07 18:41:12 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_putnbr(int nb)
{
	return (nb + 1);
}

int		*ft_map(int *tab, int length, int(*f)(int))
{
	int		i;
	int		*newtab;

	i = 0;
	if (!(newtab = (int*)malloc(sizeof(int) * length)))
		return (NULL);
	while (i < length)
		newtab[i++] = (*f)(tab[i]);
	return (newtab);
}

int		main(void)
{
	int tab[4] = {4, 5, 6, 5};
	int *new = ft_map(tab, 4, ft_putnbr);
	printf("%d", new[0]);
}
