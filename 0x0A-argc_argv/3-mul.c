#include <stdio.h>
#include <stlib.h>
/**
 * main - multiplies two numbers
 * @argc: argument
 * @argv: argument as well
 * @i: integer
 * @j: integer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	printf("%d\n", i * j);
	return (0);
}
