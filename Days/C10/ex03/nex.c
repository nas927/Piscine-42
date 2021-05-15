int	ft_count(int *count)
{
	*count++;
	return (*count);
}

int		main(void)
{
	int	i;
	int	count;
	int	*p;

	count = 0;
	i = 0;
	p = &count;

	while (i < 100)
	{
		printf("%d", ft_count(p));
		i++;
	}
}
