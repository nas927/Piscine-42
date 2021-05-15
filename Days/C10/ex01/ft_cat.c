/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 12:40:05 by nassim            #+#    #+#             */
/*   Updated: 2021/03/13 13:20:05 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define SIZE 32

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

void	ft_read_file(int file, char **av, int length)
{
	char	buffer[SIZE + 1];
	int		end;

	end = read(file, buffer, SIZE);
	buffer[end] = '\0';

	if (file == -1)
	{
		ft_putstr("ft_cat: ");
		ft_putstr(av[length]);
		ft_putstr(": No such file or directory\n");
		return ;
	}
	else
		ft_putstr(buffer);
}

int		main(int ac, char **av)
{
	int		i;
	int		file;

	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			file = open(av[i], O_RDONLY);
			ft_read_file(file, av, i);
			close(file);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "No file", 7);
	return (0);
}
