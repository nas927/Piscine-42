/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 18:56:49 by nassim            #+#    #+#             */
/*   Updated: 2021/02/15 19:08:05 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		resultat;
	
	i = 1;
	resultat = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		while (i <= nb)
			resultat *= i++;
			
	}
	return (resultat);
}

int		main(void)
{
	printf("%d",ft_iterative_factorial(5));
}
