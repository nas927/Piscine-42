/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle_long_iterative_versi          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 20:46:09 by nassim            #+#    #+#             */
/*   Updated: 2021/05/17 16:51:34 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Va afficher mon tableau
void    ft_print_tab(char *tab)
{
	int     i;

	i = 0;
	while (tab[i])
		write(1, &tab[i++], 1);
	write(1, "\n", 1);
}

// Va vérifier que mes dames sont ni sur la même colonne ni sur la même digonale
int     ft_check_all(char *queens)
{
	int     i;
	int     j;
	int     count;

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

void	init(char *queens)
{
	queens[0] = '0';
	queens[1] = '2';
	queens[2] = '5';
	queens[3] = '0';
	queens[5] = '0';
	queens[6] = '0';
	queens[7] = '0';
	queens[8] = '0';
	queens[9] = '0';
}

// Va incrémenter mon tableau de 0 à 999999999
void    increment(char *queens, int nb)
{
	int     i;

	i = nb;
	if (nb >= 1)
	{
		if (queens[nb - 1] == '9')
			increment(queens, nb - 1);
		else
			queens[nb - 1]++;
		while (i < 9)
			queens[i++] = '0';
		queens[9] = '0';
	}
	else
		return ;
}

// Va incrémenter count à chaque fois que la véification de tout le tableau est bonne et l'afficher.
int     	ft_ten_queens_puzzle(void)
{
	int     count;
	char    queens[10];

	count = 0;
	init(queens);
	while (count < 724)
	{
		if (ft_check_all(queens))
		{
			ft_print_tab(queens);
			count++;
		}
		if (queens[9] == '9')
			increment(queens, 9);
		else
			queens[9]++;
	}
	return (count);
}

int		main(void)
{
	printf("%d", ft_ten_queens_puzzle());
}
