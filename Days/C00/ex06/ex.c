#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int a;

	a = 0;
	while(a <= 122)
	{
		ft_putchar(a / 10 + 48);
		ft_putchar(a++ % 10 + 48);
		ft_putchar(' ');
	}
}

int	main(void)
{
	ft_print_comb2();
}
