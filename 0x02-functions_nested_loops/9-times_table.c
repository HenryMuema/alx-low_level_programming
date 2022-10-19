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
	int a, b, pro;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			pro = a * b;
			printf("%d, ", pro);
		}
		_putchar('\n');
	}
}
