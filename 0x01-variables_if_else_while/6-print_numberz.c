#include <stdio.h>
/**
* main - print the single digit numbers from  the main function
*
* Description: using main function
* print single numbers
* Return: 0
*/
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
	putchar(n);
}
putchar('\n');
return (0);
}
