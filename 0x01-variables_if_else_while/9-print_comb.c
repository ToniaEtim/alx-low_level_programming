#include <stdio.h>
/**
* main - print single numbers from the main function
*
* Description: using main function
* print all single digit numbers
* Return: 0
*/
int main(void)
{
int i;
	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
