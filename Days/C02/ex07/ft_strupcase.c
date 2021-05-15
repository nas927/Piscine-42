/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strucase.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 21:21:48 by nassim            #+#    #+#             */
/*   Updated: 2021/02/13 21:39:06 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		/*if (!(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'))
			return;*/
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int		main(void)
{
	char nas[6] = "nassim";
	ft_strupcase(nas);
	printf("%s", nas);

}
