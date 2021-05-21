/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tower_hanoi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 21:33:26 by nassim            #+#    #+#             */
/*   Updated: 2021/05/21 22:29:24 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char *str)
{
        int             i;

        i = 0;
        while (str[i])
			write(1, &str[i++], 1);
}

int             ft_tower_hanoi(int n, char *begin, char *end, char *middle, int *count)
{
        if (n > 0)
        {
                *count += 1;
                ft_tower_hanoi(n - 1, begin, middle, end, count);
                ft_putstr("Déplacement de ");
                ft_putstr(begin);
                ft_putstr(" vers ");
                ft_putstr(end);
                write(1, "\n", 1);
                ft_tower_hanoi(n - 1, middle, end, begin, count);
        }
        return (*count);
}

int             main(void)
{
        int             count;

        count = 0;
        printf("%d\n", ft_tower_hanoi(4, "début", "fin", "milieu", &count));
}
