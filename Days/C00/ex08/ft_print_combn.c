/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 16:13:57 by nassim            #+#    #+#             */
/*   Updated: 2021/04/18 15:24:22 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_range(int nb, char *tab)
{
	int		i;
	char	j;

	i = 0;
	j = '0';
	while (i < nb)
	{
		tab[i++] = j;
		j++;
	}
	tab[i] = '\0';
}

void	ft_print_tab(char *tab, char charset)
{
	int		i;

	i = 0;
	while (tab[i])
		ft_putchar(tab[i++]);
	if (tab[0] != charset)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_check(char *tab, int n)
{
	char	chiffre;
	
	n--;
	if (tab[n - 1] == tab[n] - 1)
		ft_check(tab, n--);
	else
		tab[n - 1]++;
	chiffre = tab[n - 1];
	chiffre++;
	while (tab[n])
		tab[n++] = chiffre++;
}

void	ft_print_combn(int n)
{
	char	tab[n];
	int		charset;

	ft_range(n, tab);
	charset = 10 - n;
	ft_print_tab(tab, charset);
	while (tab[0] != '0' + charset)
	{
		if (tab[n - 1] == '9')
			ft_check(tab, n);
		else
			tab[n - 1]++;
		ft_print_tab(tab, charset + '0');
	}
}

int		main(void)
{
	ft_print_combn(9);
	/*int		n = 3;
	int		charset = 10 - n;
	char s[n];
	s[0] = '2';
	s[1] = '8';
	s[2] = '9';
	s[n] = '\0';
	ft_check(s, n);
	ft_print_tab(s, charset + '0');*/
}
