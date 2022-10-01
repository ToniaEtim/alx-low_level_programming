#include <stdio.h>

/**
 * main - The function that print all argument
 * @argc: the parameter
 * @argv: the array that contians the parameter
 * Return: 0 at success
 */

int main(int argc, char *argv[])
{
	int i;
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	return (0);
}
