/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 14:35:42 by nassim            #+#    #+#             */
/*   Updated: 2021/03/02 15:48:33 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		is_charset(char charset, char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == charset)
			return (1);
		i++;
	}
	return (0);
}

int		count_word(char *str, char *charset)
{
	int		i;
	int		j;
	int		count;

	i = 0;
	j = 0;
	count = 0;
	while (str[i])
	{
		while (j <= ft_strlen(charset))
		{
			if (str[i] == charset[j])
				count++;
			j++;
		}
		j = 0;
		i++;
	}
	return (count);
}

char	*ft_strdup(char *str, char *charset)
{
	char *tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] && !is_charset(str[i], charset))
		i++;
	if (!(tab = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	while (j < i)
		tab[j++] = str[j];
	tab[j] = '\0';
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char		**tableau;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(tableau = (char**)malloc(sizeof(char*) * (count_word(str, charset) + 1))) || !ft_strlen(str))
		return (NULL);
	while (j < count_word(str, charset))
	{
		if (!(is_charset(str[i], charset)))
			tableau[j++] = ft_strdup(str + i, charset);
		while (!(is_charset(str[i], charset)))
			i++;
		if (is_charset(str[i], charset))
			i++;
	}
	tableau[j] = 0;
	return (tableau);
}

int		main(void)
{
	char *str = "toi salut";
	char *charset = "toi";
	char **string = ft_split(str, charset);
	printf("%s", string[0]);
}

