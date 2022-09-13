#include "main.h"
/**
* main - print _putchar using the function
*
* Description: using the main function
* print the word
* Return: always 0
*/
int main(void)
{
char c[] = "_putchar";
int i = 0;

for (i = 0; i <= 7; i++)
{
putchar(c[i]);
}
putchar('\n');
return (0);
}
