/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:01:36 by nassim            #+#    #+#             */
/*   Updated: 2021/03/07 19:10:48 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		str(char *str)
{
	return (0);
}

int		ft_count_if(char **tab, int length, int(*f)(char*))
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if ((*f)(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}

int		main(void)
{
	char *string[2];
	string[0] = "nassim";
	string[1] = "brenda";
	printf("%d", ft_count_if(string, 2, str));
}
