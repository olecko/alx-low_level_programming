#include "main.h"

/**
 * _abs - Entry point
 * @n: n is am integer
 * Description: prints the adsolute value of an integer
 * Return: int
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
