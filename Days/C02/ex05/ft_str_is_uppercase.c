/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 20:51:31 by nassim            #+#    #+#             */
/*   Updated: 2021/02/13 20:57:01 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int		i;

	i = 0;
	if (!str)
		return 1;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			i++;
		else
			return 1;
	}

	return 0;
}

int		main(void)
{
	char	*nas = "HEY";
	printf("%d",ft_str_is_uppercase(nas));
}
