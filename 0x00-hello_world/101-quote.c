#include <stdio.h>
#include <unistd.h>
/**
* main - print a quote using the main function
*
* Description: using the main function
* print the quote
* Return: 1
*/
int main(void)	
{
	write(2, "and that piece was useful - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
