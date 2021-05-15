/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 21:27:02 by nassim            #+#    #+#             */
/*   Updated: 2021/02/14 22:01:33 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int		i;
	int		j;
	int		e;

	i = 0;
	j = 0;
	e = 0;
	while (dest[i])
		i++;
	if (i <= size)
		j = j + size;
	else
		j = j + i;
	while (src[j] && i + 1 < size)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (j);
}

int		main(void)
{
	char nas[30] = "nassim ";
	char brenda[7] = "brenda";
	printf("%d\n", ft_strlcat(nas, brenda, 5));
	printf("%d\n", strlcat(nas, brenda, 5));
}
