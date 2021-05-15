/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 19:54:25 by nassim            #+#    #+#             */
/*   Updated: 2021/02/16 20:28:19 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		j;

	j = 0;
	if (min < max)
	{
		if (!(tab = (int*) malloc(sizeof(int) * (max - min))))
			return(0);
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

int		main(void)
{
	int		i = -5;
	int		j = 2;
	int		*tab = ft_range(i, j);
	int		k = 0;

	while (k < j - i)
		printf("%d", tab[k++]);
}
