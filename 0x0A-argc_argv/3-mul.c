#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: argument
 * @argv: argument as well
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, j, mul;

	if (argc < 3)
	{
		printf("Error\n");
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;

	printf("%d\n", mul);
	return (0);
}