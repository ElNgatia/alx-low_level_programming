#include <stdio.h>
#include "main.h"
/**
 * set_string - sets value of a pointer to a char
 * @s: pointer
 * @to: pointer
 * Return: 0
 */

void set_string(char **s, char *to)
{
	*s = to;
}
