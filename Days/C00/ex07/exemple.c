#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	long n;
	n = nb;

	if(n >= 0 && n < 10)
	{
		ft_putchar(n + '0');
	}
	else if(n < 0 && n != -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(-n + '0');
	}
	else if(n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int main(void)
{
	ft_putnbr(-2147483648);
}
