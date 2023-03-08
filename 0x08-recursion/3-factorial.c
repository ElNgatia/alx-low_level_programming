#include "main.h"
/**
 * factorial - returns the factorial of a number
 * @n: number to be calculated using
 * Return: 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
