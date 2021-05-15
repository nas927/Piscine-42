/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 21:48:05 by nassim            #+#    #+#             */
/*   Updated: 2021/02/13 22:21:52 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	str = ft_strlowcase(str);
	while (str[i])
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
		if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z' || str[i - 1] >= 'A' 
		&& str[i - 1] <= 'Z'
		|| str[i - 1] >= '0' && str[i - 1] <= '9'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}

int		main(void)
{
	char nas[20];

	nas = "je5suis@beAu moi";
	/*printf("%s", ft_strcapitalize(nas));*/
}
