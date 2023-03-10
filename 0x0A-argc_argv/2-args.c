#include <stdio.h>
/**
 * main - prints arguments passed to it
 * @argc: argument
 * @argv: argument
 * Return: 0
 */
int main(int argc, char **argv)
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
		return (0);
	}
}
