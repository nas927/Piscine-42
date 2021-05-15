/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 19:15:30 by nassim            #+#    #+#             */
/*   Updated: 2021/02/14 19:37:22 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int		main(void)
{
	char nas[6] = "nassim";
	char nas2[6] = "nassi";
	printf("%d",ft_strcmp(nas, nas2));
}
