#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of two diagonals of a square matrix of integers
 * @a: pointer to first element
 * @size: size of matrix
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;

	for (int i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + size - 1 - i);
	}

	printf("%d, %d\n", sum1, sum2);
}
