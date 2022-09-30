#include "main.h"
#include <stdio.h>

/**
 * main - Prints the name of a Program.
 * @argc: Number of command line arguments.
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char **argv)
{
	while(argc--)
		printf("%s\n", *argv++);

	return (0);
}
