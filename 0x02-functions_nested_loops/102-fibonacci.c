#include <stdio.h>

/**
* main- print out first 50
*fibonacci suit numbers
*Return: 0
*/
int main(void)
{
	int inc;
	unsigned long n1 = 0, n2 = 1, n3;

	for (inc = 0; inc < 50; inc++)
	{
		n3 = n1 + n2;
		printf("%ld", n3);
		n1 = n2;
		n2 = n3;

	if (inc == 48)
	printf("\n");
	else
	printf(",");
	printf(" ");
	}

return (0);
}
