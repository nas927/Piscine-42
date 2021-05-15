/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 00:31:31 by nassim            #+#    #+#             */
/*   Updated: 2021/02/14 01:19:20 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Vérifier si c'est négatif % 1 = impaire % 2 = paire
int		ft_atoi(char* str)
{
	int		i;
	int		neg;
	int		result;
	
	i = 0;
	neg = 1;
	result = 0;
	while (str[i] && (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'|| str[i] == '\r' || str[i] == '\f' || str[i] == ' '))
		i++;
	// if pour l'exam sinon while
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		/**/
		//result = (result * 10) + str[i] - '0';
		i++;
	}
	return (result * neg);
}

int		main(void)
{
	char* nas = "     	+---1225bheb152";
	printf("%d", ft_atoi(nas));
}
