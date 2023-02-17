#include <stdio.h>
/**
 * main - print hex numbers
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 15; num++)
		if (num < 10)
		{
			putchar("%d", num);
		}
		else
		{
			putchar("%c", 'A' + num - 10);
		}
}
