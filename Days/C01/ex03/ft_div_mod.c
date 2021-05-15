/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 20:31:04 by nassim            #+#    #+#             */
/*   Updated: 2021/02/11 20:42:55 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int		main(void)
{
	int a = 12;
	int b = 2;

	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);

	printf("La division : %d \n", div);
	printf("Le modulo : %d \n", mod);
}
