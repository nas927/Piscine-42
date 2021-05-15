/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 21:42:15 by nassim            #+#    #+#             */
/*   Updated: 2021/02/17 01:07:25 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_count(char **tab, int size)
{
	int		i;
	int		j;
	int		count;

	i = 0;
	j = 0;
	count = 0;
	while (i < size)
	{
		while (tab[i][j])
		{
			j++;
			count++;
		}
		i++;
		j = 0;
	}
	return (count);
}

int		count(char *str)
{
	int		i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char		*print_str(int size,char *str, char **strs, char *sep)
{
	int		i;
	int		j;
	int		f;

	i = 0;
	f = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			str[f++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				str[f++] = sep[j++];
		}
		i++;
	}
	str[f] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		e;

	e = count(sep);
	if (size <= 0)
	{
		if (!(str = (char*)malloc(sizeof(char) * 1)))
			return (NULL);
		str[0] = '\0';
	}
	else
	{
		if (!(str = (char*)malloc(sizeof(char) * ft_count(strs, size) + (e * (size - 2)) + 1)))
		return (NULL);
		str = print_str(size, str, strs, sep);
	}
	return (str);
}

int		main(int ac, char **av)
{
	char	sep[6] = "     ";
	char *str[2];
	str[0] = "nassim";
	str[1] = "brenda";
	char *resultat = ft_strjoin(2, str, sep);

	printf("%s", resultat);
}

