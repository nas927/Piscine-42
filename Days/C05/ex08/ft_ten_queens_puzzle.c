/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 20:46:09 by nassim            #+#    #+#             */
/*   Updated: 2021/05/12 16:12:00 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Va afficher mon tableau
void	ft_print_tab(char *tab)
{
	int		i;

	i = 0;
	while (tab[i])
		write(1, &tab[i++], 1);
	write(1, "\n", 1);
}

// Va vérifier que mes dames sont ni sur la même colonne ni sur la même digonale
int		ft_check_all(char *queens)
{
	int		i;
	int		j;
	int		count;

	i = 0;
	j = 1;
	count = 1;
	while (i < 9)
	{
		while (j < 10)
		{
			if (queens[j] == queens[i] + count || queens[j] == queens[i] - count || queens[j] == queens[i])
				return (0);
			else
			{
				j++;
				count++;
			}
		}
		i++;
		count = 1;
		j = i + 1;
	}
	return (1);
}

// Va initialiser tout le tableau à 0
void	init(char *queens)
{
	int		i;

	i = 0;
	while (i < 10)
		queens[i++] = '0';
}

// Va incrémenter mon tableau de 0 à 999999999
void	increment(char *queens, int nb)
{
	int		i;

	i = nb;
	if (queens[nb - 1] == '9')
		increment(queens, nb - 1);
	else
		queens[nb - 1]++;
	while (i < 9)
		queens[i++] = '0';
	queens[9] = '0';
}

// Va incrémenter count à chaque fois que la véification de tout le tableau est bonne et l'afficher.
int		ft_ten_queens_puzzle(void)
{
	int		count;
	char	queens[10];

	count = 0;
	init(queens);
	while (count != 724)
	{
		if (queens[9] == '9')
			increment(queens, 9);
		else
			queens[9]++;
		if (ft_check_all(queens))
		{
			ft_print_tab(queens);
			count++;
		}
	}
	return (count);
}

int		main(void)
{
	printf("%d", ft_ten_queens_puzzle());
}
