/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 06:48:46 by nassim            #+#    #+#             */
/*   Updated: 2021/03/11 09:05:09 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

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

int		count_tab(char **tab)
{
	int		i;

	i = 0;
	while (tab[i + 1] != NULL)
		i++;
	return (i);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	j = 0;
	while (tab[i + 1] != NULL)
	{
		while (j < count_tab(tab))
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
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
	string[2] = "v";
	string[3] = "e";
	string[4] = "b";
	string[5] = "a";
	string[6] = 0;

	ft_sort_string_tab(string);

	int i = 0;
	while (string[i] != NULL)
		printf("%s\n", string[i++]);
}
