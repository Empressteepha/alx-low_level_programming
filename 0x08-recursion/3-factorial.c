#include "main.h"
/**
 * factorial - returns the factorial value of num
 * @n: number whose factorial
 * return: n factorial
 */

int factorial(int n)
{
	if (n < 0)
		return(-1);
	if (n == 0)
		return(1);
	return(n * factorial(n - 1));
}
