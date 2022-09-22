#include "main.h"

/**
 * leet - Encodes a string t0o 1337
 * @str: The string to be encoded
 * Return: A pointer to the encoded string
 */
char *leet(char *str)
{
	int i = 0, m;
	    char leet[8] = {'0', 'L', '?', 'E', 'A', '?', '?', 'T' };

	while (str[i])
	{
		for (m = 0; m <= 7; m++)
		{
			if (str[i] == leet[m] || str[i] - 32 == leet[m])
				str[i] = m + '0';
		}
	i++;
	}
	return (str);
}
