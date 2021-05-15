/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 13:27:20 by nassim            #+#    #+#             */
/*   Updated: 2021/03/14 13:17:27 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

//Don't use 2 read just one we need to open and close the file to count.. after we can open the file again

int		ft_strcmp(char *a, char *b)
{
	int		i;

	i = 0;
	while (a[i] || b[i])
	{
		if (a[i] != b[i])
			return (0);
		i++;
	}
	return (1);
}

int		ft_atoi(char *str)
{
	int		i;
	int		count;
	int		neg;

	i = 0;
	neg = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '-')
			neg++;
		if (str[i] <= '9' && str[i] >= '0')
			count = (count * 10) + (str[i] - '0');
		i++;
	}
	if (neg % 2 == 0)
		return (count);
	else
		return (0);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int		ft_count_char(int length, char **av, int ac)
{
	int		i;
	int		file;
	char	buffer;

	i = 0;
	file = open(av[length], O_RDONLY);
	if (file == -1)
	{
		ft_putstr("ft_tail: Cannot open '");
		ft_putstr(av[length]);
		ft_putstr("' For reading: No such file or directory\n");
		return (0);
	}
	while (read(file, &buffer, 1) != 0)
		i++;
	close(file);	
	if (ac > 4 && i > 0)
	{
		ft_putstr("==> ");
		ft_putstr(av[length]);
		ft_putstr(" <==\n");
	}
	return (i);
}

void	ft_display_file(int file, int atoi, int length, char **av, int ac)
{
	char	*tab;
	int		i;
	int		count;
	
	i = ft_count_char(length, av, ac);
	count = (i - 1) - atoi;
	if (!(tab = (char*)malloc(sizeof(char) * i)))
		return ;
	if (i > 0)
	{
		file = open(av[length], O_RDONLY);
		read(file, tab, (i - 1));
		tab[i] = '\0';
	}
	while (count < i - 1)
		write(1, &tab[count++], 1);
	write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	int		i;
	int		file;
	int		atoi;

	i = 3;
	atoi = 0;
	if (ac > 2)
	{
		if (ft_strcmp(av[1], "-c"))
		{
			atoi = ft_atoi(av[2]);
			while (i < ac)
			{
				ft_display_file(file, atoi, i, av, ac);
				i++;
			}
		}
	}
}
