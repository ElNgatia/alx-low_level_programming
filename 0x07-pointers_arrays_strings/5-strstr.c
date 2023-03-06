#include "main.h"
#include <stdio.h>
/**
 * _strstr - locate substring
 * @haystack: pointer to string to search for substring needle
 * @needle: pointer to substring to search for in haystack
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	size_t needle_len = strlen(needle);

	while (*haystack != '\0')
	{
		if (strncmp(haystack, needle, needle_len) == 0)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
