/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_tab.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 14:24:27 by nassim            #+#    #+#             */
/*   Updated: 2021/03/12 14:41:49 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		ft_strcmp(char *a, char *b)
{
	int		i;

	i = 0;
	while (a[i] || b[i])
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
	}
	return (0);
}

int		ft_count_tab(char **tab)
{
	int		i;

	i = 0;
	while (tab[i + 1] != NULL)
		i++;
	return (i);
}

void	ft_advanced_sort_tab(char **tab, int(*cmp)(char *, char *))
{
	int		i;
	int		j;
	int		length;
	char	*tmp;

	i = 0;
	j = 0;
	length = ft_count_tab(tab);
	while (tab[i + 1] != NULL)
	{
		while (j < length)
		{
			if ((*cmp)(tab[j], tab[j + 1]) > 0)
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		j = 0;
		i++;
	}
}

int		main(void)
{
	char *string[6];
	string[0] = "z";
	string[1] = "x";
	string[2] = "b";
	string[3] = "p";
	string[4] = "m";
	string[5] = "e";
	string[6] = 0;
	
	ft_advanced_sort_tab(string , ft_strcmp);
	int		i = 0;
	while (string[i + 1] != NULL)
		printf("%s\n", string[i++]);
}
