#include "main.h"
#include <stdio.h>
/**
* _abs - function that computes the absolute value of an integer
* @c: is the int that will be used for the argument of the function
* Return: 0
*/
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
	return (0);
	}
	else
	return (c * -1);
}
