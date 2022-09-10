#include <stdio.h>
/**
* main - print reverse from the main function
*
* Description: using the main function
* print in reverse
* Return: 0
*/
int main(void)
{
char c;
for (c = 'z' ; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
