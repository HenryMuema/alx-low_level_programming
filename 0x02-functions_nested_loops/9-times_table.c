#include "main.h"
#include<stdio.h>
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 *
 * Return: void
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= a; b++)
		{
			printf("%d*%d, ", a, b);
		}
		_putchar('\n');
	}
}
