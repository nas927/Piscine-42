#include "includes.h"

/*affiche tous les charactères*/
void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

/*Affiche tous les charactères sauf ceux qui ne sont pas dans la table ascii man ascii pour voir*/
void	ft_put_tab(char *str)
{
	int		i;

	i = 0;
	write(1, " |", 2);
	while (str[i] && i < 17)
	{
		if (str[i] < 32 || str[i] > 126)
			write(1, ".", 1);
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "|\n", 2);
}

/**Converti n'importe quoi en hexadecimal*/
void	ft_decimal_hex(long charset)
{
	unsigned const char	*table;

	table = "0123456789abcdef";
	if (charset >= 0 && charset <= 15)
		write(1, &table[charset], 1);
	else
	{
		ft_decimal_hex(charset / 16);
		ft_decimal_hex(charset % 16);
	}
}

/*Va s'occuper de ce qu'il y a avant la conversion de texte en hexa*/
void	ft_count(long count)
{
	int		i;

	if (count >= 0 && count < 16)
		i = 5;
	else if (count >= 16 && count <= 255)
		i = 4;
	else if (count > 255 && count < 4046)
		i = 3;
	else if (count >= 4096 && count < 65536)
		i = 2;
	else
		i = 0;
	write(1, "00000", i);
	ft_decimal_hex(count);
	write(1, " ", 1);
}

/*Converti toute une chaine en hexa jusqu'à la 16 eme lettre*/
int		ft_convert_str(char *str, long count)
{
	int		i;

	i = 0;
	ft_count(count);
	while (str[i] && i < 17)
	{
		ft_putstr(" ");
		if (i == 8)
			ft_putstr(" ");
		if (str[i] < 16 && str[i] >= 0)
			write(1, "0", 1);
		if (str[i] >= 0 && str[i] <= 127)
			ft_decimal_hex(str[i]);
		else
			write(1, "00", 2);
		i++;
	}
	while (i < 17)
	{
		if (i == 8)
			write(1, " ", 1);
		ft_putstr("   ");
		i++;
	}
	ft_putstr(" ");
	return (1);
}
