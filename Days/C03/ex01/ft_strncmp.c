/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 19:39:09 by nassim            #+#    #+#             */
/*   Updated: 2021/02/14 19:51:24 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char* s1, char* s2, unsigned int n)
{
	int		i;

	i = 0;
	if (n > 0)
	{
		while (i < n && (s1[i] || s2[i]))
		{
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
			else
				i++;
		}
	}
	return (0);
}

int		main(void)
{
	char nas[6] = "nassim";
	char nas2[6] = "navsim";
	printf("%d",ft_strncmp(nas, nas2, 3));
}
