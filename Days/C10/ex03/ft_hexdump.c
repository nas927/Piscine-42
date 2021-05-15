#include "includes.h"

int		ft_count_read(int file, char *str)
{
	int		i;
	char	buffer;

	file = open(str, O_RDONLY);
	i = 0;
	if (file == -1)
	{
		ft_putstr("ft_hexdump: ");
		ft_putstr(str);
		ft_putstr(": No such file or directory");
		return (0);
	}
	while (read(file, &buffer, 1) != 0)
		i++;
	close(file);
	return (i);
}

void	ft_buffer_to_tab(int file, wchar_t *tab, int i)
{
	wchar_t	buffer;

	while (read(file, &buffer, 1) != 0)
	{
		if ((int)buffer == 0)
			buffer = 128;
		else if ((int)buffer < 0)
			buffer = '.';
		tab[i++] = (char)buffer;
	}
}

int		last_thing(int file, char *str, long count)
{
	int		i;
	wchar_t	*tab;

	i = ft_count_read(file, str);
	if (!i)
		return (0);
	if (!(tab = (wchar_t *)malloc(sizeof(wchar_t) * i)))
		return (0);
	tab[i] = '\0';
	file = open(str, O_RDONLY);
	i = 0;
	ft_buffer_to_tab(file, tab, 0);
	while (tab[i])
	{
		count += ft_convert_str(tab + i, count);
		ft_put_tab(tab + i);
		i += 16;
	}
	return (count);
}

int		main(int ac, char **av)
{
	int		i;
	long		count;
	int		file;

	i = 2;
	count = 0;
	if (ac > 2)
	{
		if (av[1][0] == '-' && av[1][1] == 'C')
		{
			while (i < ac)
				count += last_thing(file, av[i++], count);
		}
	}
	return (0);
}
