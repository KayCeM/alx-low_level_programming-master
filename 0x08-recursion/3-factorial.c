#include "main.h"

/*
 * returns the factorial of a number
 * returns: factorial of n
 */
int factorial (int n)
{
	if(n < 0)
		return(-1);
	if(n == 0)
		return(1);
	return(n *factoria(n - 1));
}
