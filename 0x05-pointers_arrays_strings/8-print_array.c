#include "main.i"
/**
 * print_array - prints elements of an array of integers
 * @a: pointer to array of integers
 * @n: number of elements of array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
