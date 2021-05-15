/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 20:30:50 by nassim            #+#    #+#             */
/*   Updated: 2021/02/15 21:40:13 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{

	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index < 0)
		return (-1);
	else
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	return (0);
}

/*int unNumbre(int i)
{
	if (i == 0)
		return (0);
	else if (i == 1)
		return 1;
	else if (i < 0)
		return (-1);
	else
		return (i - 1);
}*/

int		main(void)
{
	printf("%d", ft_fibonacci(2));
}
