
void	une_fonction(void *data)
{
	// divise par 3
	*(int *)data >>= 2;
	int a = 1;
	int b = 2;
	float res = a/b;
	printf("%f", res);
}

int		main(void)
{
	int		data = 24;
	une_fonction(&data);
}
