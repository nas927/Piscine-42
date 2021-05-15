/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_nest_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 23:29:43 by nassim            #+#    #+#             */
/*   Updated: 2021/02/15 23:49:28 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		i;

	i = 2;
	while (i <= (nb / i)) // Don't forget...
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_nest_prime(int nb)
{
	if (nb < 2)
		return (0);
	else
	{
		while (!ft_is_prime(nb))
			nb++;
	}
	return (nb);
}

int		main(void)
{
	printf("%d", ft_find_nest_prime(20));
}
