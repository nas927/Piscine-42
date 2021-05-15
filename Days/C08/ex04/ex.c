#include "ft_strs_to_tab.h"

char	*ft_strcpy(char *src, char *dest)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	if (!(dest = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	while (src[j])
		dest[j++] = src[j];
	dest[j] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int		i;
	int		j;

	t_stock_str *tableau;
	i = 0;
	j = 0;
	while (av[i])
		i++;
	if (!(tableau = (t_stock_str*)malloc(sizeof(t_stock_str) * (i + 1))))
		return (NULL);
	while (j < i)
	{
		tableau[j].str = av[j];
		tableau[j].size = ft_strlen(tableau[j].str);
		tableau[j].copy = ft_strcpy(av[j], tableau[j].copy);
		j++;
	}
	tableau[j].str = 0;
	return (tableau);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
	ft_putchar('\n');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;

	i = 0;
	while (par[i].str != NULL)
	{
		ft_putchar(par[i].size + 48);
		ft_putchar('\n');
		ft_putstr(par[i].str);
		ft_putstr(par[i].copy);
		i++;
	}
}

int		main(int ac, char **av)
{
	t_stock_str *tableau;
	tableau = ft_strs_to_tab(ac, av);
	ft_show_tab(tableau);
}
