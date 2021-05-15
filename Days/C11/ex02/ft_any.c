/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 18:44:14 by nassim            #+#    #+#             */
/*   Updated: 2021/03/07 18:59:33 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
int anym(char *str)
{
	return (15);
}

int		ft_any(char **tab, int(*f)(char *))
{
	int		i;

	i = 0;
	while (tab[i] != NULL)
	{
		if ((*f)(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}

int		main(void)
{
	char *string[2];
	string[0] = "nassim";
	string[1] = "brenda";
	printf("%d", ft_any(string, anym));
}
