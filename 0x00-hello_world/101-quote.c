#include <stdio.h>
#include <unistd.h>
/**
* main -print the qupte in the function
*
*Description: using the main function
* print the quote
* Return: 1
*/
int main(void)
{
	write(1, "and that peice of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
