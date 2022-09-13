#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: a function that prints all alphabets
 * Return: void
 */
void print_alphabet(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
