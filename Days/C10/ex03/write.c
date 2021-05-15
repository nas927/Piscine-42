#include "includes.h"

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

void	ft_putstr_wchar(wchar_t *str)
{
	int		i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int		file;
	char	buffer;
	char	*str;
	int		i;
	int		j;

/*	i = ft_count_read(file, "a.out");
	j = 0;
	file = open("a.out", O_RDONLY);
	if (!(str = (char*)malloc(sizeof(char) * i)))
		return (0);
	read(file, str, i);
	while (i < 5)
	{
		while (j < 16 && read(file, &buffer, 1) != 0)
		{
			write(1, &buffer, 1);
			j++;
		}
		i++;
		j = 0;
	}
	close(file);
	ft_putstr(str);*/
	//write(1, "é", 2);
	for (i = 120; i < 200; i++)
		printf("%d", (char)i);
}
