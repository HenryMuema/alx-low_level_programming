#include "main.h"
#include<stdio.h>
/**
 * print_to_98 -  prints all natural numbers from n to 98
 * @n: integer value
 *
 * Return: void
 */
void print_to_98(int n)
{
	int a;

	if (n > 98)
	{
		for (a = n; a >= 98; a--)
		{
			printf("%d, ", a);
		}
		printf("\n");
	}
	else if (n < 98)
	{
		for (a = n; a <= 98; a++)
	{
		printf("%d, ", a);
	}
		printf("\n");
	}
	else
	{
		printf("%d\n", n);
	}
}
