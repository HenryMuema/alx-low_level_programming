#include "main.h"
/**
 * print_triangle -  prints a triangle using the character #
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= a; b++)
			{
				for (c = 10; c > a; c--)
				{
					_putchar(' ');
				}
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
