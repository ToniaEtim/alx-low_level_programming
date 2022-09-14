#include "main.h"
/**
* _isalpha - function to check if c is letter, lowercase or upper case
* @c: is the int to be used for thr argument of the function
* Return: 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	return (0);
}
