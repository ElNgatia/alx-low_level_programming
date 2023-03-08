#include "main.h"
/**
 * is_palindrome - returns 1 if string is a palindrome and 0 if not
 * @s: string
 * @i: iterative
 * @len: length
 * Return: 1 if palindrom 0 if not
 */
int check(char *s, int i, int len);
int _strlen_rec(char *s);
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check(s, 0, _strlen_rec(s)));
}
/**
 * _strlen_rec - return length of string
 * @s: string
 * Return: length of string
 */
int _strlen_rec(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_rec(s + 1));
}
/**
 * check - check characters
 * @s: string
 * @i: iterative
 * @len: length
 * Return: 1 if palindrome 0 otherwise
 */
int check(char *s, int i, int len)
{
	if (*(s + 1) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check(s, i + 1, len - 1));
}
