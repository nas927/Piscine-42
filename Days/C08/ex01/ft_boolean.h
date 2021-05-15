#ifndef	FT_BOOLEAN_H
#define FT_BOOLEAN_H

#include <unistd.h>
#define TRUE 1
#define FALSE 0
#define EVEN_MSG "I have an even number of arguments"
#define ODD_MSG "I have an odd number of arguments"
#define SUCCESS 0

typedef int t_bool;

int EVEN(int nbr)
{
	if (nbr % 2 == 0)
		return (TRUE);
	else
		return (FALSE);
}

#endif
