#include "main.h"
#include <stdio.h>

/**
 * main- out first 50 fibbo num
 * Return: 0
*/

int main(void)
{
	long a = 1;
	long b = 2;
	int c = 0;

	for ( ; c <= 50; c++)
	{
		if (c == 0)
		{
			printf("%ld, ", a);
		}
		else if (c == 1)
		{
			printf("%ld, ", b);
		}
		else if (c < 49)
		{

			b += a;
			a = b - a;
			printf("%ld, ", b);
		}
		if (c == 50)
		{
			b += a;
			a = b - a;

			printf("%ld", b);
		}
	}
	printf("\n");
	return (0);

}
