#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: Number whose factorial is to be found
 *
 * Return: If n > 0 - the factorial of n.
 *	   If n < 0 - returns -1 to indicate an error.
 */
int factorial(int n)
{
	int i = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	i *= factorial(n - 1);

	return (i);
}
