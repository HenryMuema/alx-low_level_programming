#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int a, b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
