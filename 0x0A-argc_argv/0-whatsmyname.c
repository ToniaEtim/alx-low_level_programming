#include <stdio.h>
/**
 * main - this function print the name of the program
 * @argc: argc parameter
 * @argv: an array of the command listed
 * Return: (0);
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
