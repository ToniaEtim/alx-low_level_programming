#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to print mult of two numbers
 * @argc:  number of argument passed to the function
 * @argv: argument vector pointer
 * Return: 0 at success
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		puts("error");
	return (1);
	}
	num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
		return (0);
}
