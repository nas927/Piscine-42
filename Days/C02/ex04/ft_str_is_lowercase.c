/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 20:36:32 by nassim            #+#    #+#             */
/*   Updated: 2021/02/13 20:50:25 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	if(!str)
		return 1;

	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			i++;
		else
			return 1;
	}
	return 0;
}

int		main(void)
{
	char	*nas = "hey";
	printf("%d", ft_str_is_lowercase(nas));
}
