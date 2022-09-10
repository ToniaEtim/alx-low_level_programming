#include <stdio.h>
/**
* main - print base 16 from main function
*
* Description: using the main function
* print the reverse of num in base 16
* Return: 0
*/
int main(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
	putchar(c);
}
for (c = 'a'; c <= 'f'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
