#include "main.h"
/**
 * puts2 - prints every other character
 * @str: String to be printed
 * Return: 0
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(s[i]);
		i += 2;
	}

	_putchar('\n');
}
