#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
