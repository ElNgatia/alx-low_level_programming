#include "main.h"

/**
 * print_rev - Prints a string in reverse to stdout.
 *
 * @s: A pointer to the string to be printed in reverse.
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		putchar(*(s + i));
		i--;
	}

	putchar('\n');
}
