#include "main.h"
/**
 * _strlen - return length of string
 * @str: string to check
 *
 * Return: lengrh of str
 */
int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen(str + 1));
}

/**
 * check_palindrome - check to see if a string is a palindrome
 * @l: left hand index
 * @r: right hand index
 * @i: podssible palindrome
 *
 * Return: 1 if palindrome or 0 if not
 */

int check_palindrome(int l, int r, char *i)
{
	if (l >= r)
		return (1);
	else if (i[l] != i[r])
		return (0);
	else
		return (check_palindrome(l + 1, r - 1, i));
}
/**
 * is_palindrome - states if a string is a palindrome
 * @s: string check
 *
 * Return: 1 if palindrome, o if not
 */
int is_palindrome(char *s)
{
	int m;

	m = _strlen(s) - 1;
	return (check_palindrome(0, m, s));
}

