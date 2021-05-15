/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:48:36 by nassim            #+#    #+#             */
/*   Updated: 2021/03/07 20:17:43 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		masomenos(int a, int b)
{
	if (a < b)
		return (-1);
	else if (a == b)
		return (0);
	else
		return (1);
}

int		ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int		i;

	i = 0;
	while (i < length)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int		main(void)
{
	int tab[7] = {1, 2, 3, 4, 5, 6, 7};
	printf("%d", ft_is_sort(tab, 7, masomenos));
}
