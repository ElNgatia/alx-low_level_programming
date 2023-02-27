#include "main.h"
/**
 * print_rev - reverses a string
 * @s: string to be reversed
 * Return: 0
 */
void print_rev(char *s)
{
	char *start = s;
	char *end = s;
	char tmp;

	while (*end != '\0')
	{
		end++;
	}
	end--;

	while (start < end)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;

		start++;
		end--;
	}
}
