/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 19:48:43 by nassim            #+#    #+#             */
/*   Updated: 2021/02/11 20:30:03 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		main(void)
{
	int a = 25;
	int b = 56;
	int *p = &a;
	int *d = &b;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	ft_swap(p, d);
	printf("a vaut maintenant : %d", a);
	printf("b vaut maintenant : %d", b);
}
