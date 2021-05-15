/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 01:27:05 by nassim            #+#    #+#             */
/*   Updated: 2021/02/16 19:20:57 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i]) 
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_compare(char **av, int n)
{
	int		i;
	int		cmp;
	char		*tmp;
	
	i = 1;
	while (i < n - 1)
	{
		if (i >= 1)
			cmp = strcmp(av[i], av[i + 1]);
		if (cmp >= 0)
		{
			tmp = av[i + 1];
			av[i + 1] = av[i];
			av[i] = tmp;
		}
		i++;
	}		
}

int		main(int ac, char **av)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (ac > 1)
	{
		while (i < ac - 1)
		{
			if (i >= 1)
				ft_compare(av, ac);
			i++;
		}
		while (av[j])
			ft_putstr(av[j++]);
	}
}
