#include <stdio.h>
/**
 * main - Print in lowercase
 * Return:  Always 0
 */
int main(void)
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	return (0);
}
