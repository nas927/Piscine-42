/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 19:32:18 by nassim            #+#    #+#             */
/*   Updated: 2021/02/15 19:47:11 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		i;
	int 		res;
	
	i = 0;
	res = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		while (i < power)
		{
			res *= nb;
			i++;
		}
	}
	return (res);
}

int		main(void)
{
	printf("%d", ft_iterative_power(3, 6));
}
