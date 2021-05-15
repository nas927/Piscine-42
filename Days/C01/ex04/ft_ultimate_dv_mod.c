/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_dv_mod.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 20:46:29 by nassim            #+#    #+#             */
/*   Updated: 2021/02/11 21:01:56 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int tmp;
	int tmp2;
	tmp = *a / *b;
	tmp2 = *a % *b;
	*a = tmp;
	*b = tmp2;
}

int		main(void)
{
	int a = 12;
	int b = 2;

	ft_ultimate_div_mod(&a, &b);

	printf("Voici a : %d \n Voici b : %d \n", a, b);
}
