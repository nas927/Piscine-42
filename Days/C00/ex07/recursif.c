#include <unistd.h>
#include <stdio.h>

/*Exemple de récursivité*/

int		recursif(int nb)
{
	printf("%d", nb);
	if (nb == 0)
		return (0);
	else
		return (recursif(nb - 2));
}

int		main(int argc, const char **argv)
{
	recursif(100);
}
