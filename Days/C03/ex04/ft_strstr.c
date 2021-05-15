/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 20:23:58 by nassim            #+#    #+#             */
/*   Updated: 2021/02/14 22:07:07 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		z;

	i = 0;
	j = 0;
	z = 0;
	while (to_find[i])
		i++;
	while (str[z])
	{
		while (str[z + j] == to_find[j])
		{
			if (j == i - 1)
				// retourne à partir de z
				return &str[z];
			else
				j++;
		}
		z++;
		j = 0;
	}
	return (str);
}

int		main(void)
{
	char nas[50] = "Un nas phrase nassim qui contient";
	char brenda[10] = "nassim";

	printf("%s", ft_strstr(nas, brenda));
}
