#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;

	for (x < 10; x++;)
	{
		putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
