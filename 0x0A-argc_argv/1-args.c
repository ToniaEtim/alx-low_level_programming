#include <stdio.h>
/**
*  main - this function print the name of the program
* @argc: argc parameter
* @argv: an array of the command listed
* Return: (0);
*/
int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
