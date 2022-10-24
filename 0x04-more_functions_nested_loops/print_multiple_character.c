#include"main.h"
/**
 * print_multiple - print long integer
 * @x: double digit intger
 *
 * Return:void
 */
void print_multiple_character(int x)
{
	if (x > 0)
	{
		print_multiple_character(x / 10);
		_putchar((x % 10) + '0');
	}
}
