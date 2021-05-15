/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 20:29:14 by nassim            #+#    #+#             */
/*   Updated: 2021/02/16 21:40:57 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		j;
	int		*tab;

	if (min < max)
	{
		if (!(tab = (int*) malloc(sizeof(int) * max - min)))
			return (0);
		j = 0;
		while (min < max)
		{
			tab[j] = min;
			min++;
			j++;
		}
		return (tab);
	}
	return (0);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	if (!(range = (int**) malloc(sizeof(int*) * max - min)))
		return -1;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if(!(*range = ft_range(min, max)))
		return (-1);
	return (max - min);
}

int		main(void)
{
	int		i = 2;
	int		j = 10;
	int		**tab;
	int		resultat = ft_ultimate_range(tab, i, j);

	printf("%d", resultat);
}
