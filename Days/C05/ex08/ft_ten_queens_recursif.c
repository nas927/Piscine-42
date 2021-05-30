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
void    ft_recursif_queens(int *queens, int colonne, int *nb_solutions)  
{                                                              
	int             ligne;                   
	int             position;               
	
        ligne = 0;
	if (colonne == N) 
	{       
		ft_print_tab(queens);        
		*nb_solutions += 1;   
	}                          
	while (ligne < N)
	{                     
		position = 0;   
		while (position < colonne)   
		{                            
			if (queens[position] == ligne || colonne - position == ft_abs(queens[position] - ligne))     
				position = colonne;          
			position++;   
		}           
		if (position == colonne)                 
		{             
			queens[colonne] = ligne;       
			ft_recursif_queens(queens, colonne + 1, nb_solutions);          
		}                                                                         
		ligne++;                                                                                 
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
