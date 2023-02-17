#include <stdio.h>
#include <unistd.h>
/**
 * main - C program that prints without printf and puts
 * Return: 0(Success)
 */

int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, msg, strlen(msg));

	return (0);
}
