#include "main.h"
/**
 * print_triangle -  prints a triangle using the character #
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int b,c;

	if (size > 0)
	{
		for (size = 1; size <= 10; size++)
		{
			for (b = 1; b <= size; b++)
			{
				for (c = 10; c > size; c--)
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
