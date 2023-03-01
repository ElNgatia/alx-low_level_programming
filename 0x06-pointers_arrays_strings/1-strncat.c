#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string
 * @src: string
 * @n: number of bytes
 * Return: pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[1] != '\0'; i++)
	{
	}
	for (j = 0 ; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
