#include "main.h"
/**
 * print_diagonal -  draws a diagonal line on the terminal
 * @n:  number of times the character \ should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int a, b;
	
	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar('\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
