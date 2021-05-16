/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_recursif.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 02:07:53 by nassim            #+#    #+#             */
/*   Updated: 2021/05/16 02:31:03 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define N 10

void	ft_print_tab(int *queens)
{
	int		i;
	char	tmp;

	i = 0;
	//Mon terminal n'affiche pas les 0 si je met tant que queens[i]
	while (i < 10)
	{
		tmp = queens[i] + '0';
		write(1, &tmp, 1);
		i++;
	}
	write(1, "\n", 1);
}

int		ft_abs(int nb)
{
	if (nb >= 0)
		return (nb);
	else
		return (-(nb));
}

void	ft_recursif_queens(int *queens, int position, int *nb_solutions)
{
	int		i;
	int		j;

	i = 0;
	if (position == N)
	{
		ft_print_tab(queens);
		*nb_solutions += 1;
	}
	while (i < N)
	{
		j = 0;
		while (j < position)
		{
			/*prenons queens[3] = 4 i sera égal à 4 donc on passera testez sur une feuille en regardant chaque étape pour comprendre*/
			if (queens[j] == i || position - j == ft_abs(queens[j] - i))
				break ;
			j++;
		}
		/*La partie la plus compliqué du programme il faut bien connaitre la récursivité pour comprendre ce qu'il se passe en gros le programme va tester toutes les possibilités en même temps puis il va revenir au début pour tout afficher*/
		if (j == position)
		{
			queens[position] = i;
			ft_recursif_queens(queens, position + 1, nb_solutions);
		}
		i++;
	}
}

int		ft_ten_queens_recursif(void)
{
	int		queens[N];
	int		nb_solutions;

	nb_solutions = 0;
	ft_recursif_queens(queens, 0, &nb_solutions);
	return (nb_solutions);
}

int		main(void)
{
	printf("%d", ft_ten_queens_recursif());
}
