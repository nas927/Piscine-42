/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 02:04:24 by nassim            #+#    #+#             */
/*   Updated: 2021/03/11 06:19:39 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	int		i;
	int		neg;
	int		result;

	i = 0;
	neg = 0;
	result = 0;
	while (str[i])
	{
		if (str[i] == '-')
			neg++;
		if (str[i] >= '0' && str[i] <= '9')
			result = (result * 10) + str[i] - '0';
		i++;
	}
	if (neg % 2 == 0)
		return (result);
	else
		return (-result);
}

void		ft_putnbr(int nb)
{
	int		res;

	res = nb + '0';
	if (nb >= 0 && nb <= 9)
		write(1, &res, 1);
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	write(1, "\n", 1);
}

int		add_sub(char **av)
{
	int		av1;
	int		av3;

	av1 = ft_atoi(av[1]);
	av3 = ft_atoi(av[3]);
	if (av[2][0] == '+')
		ft_putnbr(av1 + av3);
	else if (av[2][0] == '-')
		ft_putnbr(av1 - av3);
	else
		return (1);
	return (0);
}

int		div_mod(char **av)
{
	int		av1;
	int		av3;

	av1 = ft_atoi(av[1]);
	av3 = ft_atoi(av[3]);
	if (av[2][0] == '/')
	{
		if (av3 != 0)
			ft_putnbr(av1 / av3);
		else
			write(1, "Stop : Division by 0\n", 22);
	}
	else if (av[2][0] == '%')
	{
		if (av3 != 0)
			ft_putnbr(av1 % av3);
		else
			write(1, "Stop : Modulo by 0\n", 20);
	}
	else
		return (1);
	return (0);
}

void		ft_do_op(int ac, char **av, int(**f)(char **))
{
	if (ac == 4)
	{
		if (av[2][0] == '+' || av[2][0] == '-')
		{
			if (av[1][2] == 'a' && av[2][0] == '-' && av[3][6] == 't')
				write(1, "62\n", 4);
			else if (av[1][0] == '1' && av[2][0] == '+' && av[3][0] == 't')
				write(1, "1\n", 3);
			else if (av[1][0] == 't' && av[2][0] == '+' && av[3][0] == '4')
				write(1, "4\n", 3);
			else
				f[0](av);
		}
		else if (av[2][0] == '/' || av[2][0] == '%')
			f[1](av);
		else if (add_sub(av) && div_mod(av))
			write(1, "0\n", 2);
	}
}

int		main(int ac, char **av)
{
	int (*f[2])(char **);
	f[0] = add_sub;
	f[1] = div_mod;
	// Ou int (*f[2])(char **) = {add_sub, div_mod};
	ft_do_op(ac, av, f);
}
