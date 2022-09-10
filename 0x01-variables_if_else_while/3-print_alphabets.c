#include <stdio.h>
/**
* main - print the alphabets
*
* Description: using the main function
* this programme will print the lower and upper case alphabets
* Return: 0
*/
int main(void)
{
char ch;
for (ch = "a" ; ch <= "z" ; ch++)
{
	putchar(ch);
}
for (ch = "A" ; ch <= "Z" ; ch++)
{

	putchar(ch);
}
putchar(ch"\n");
return (0);
}
