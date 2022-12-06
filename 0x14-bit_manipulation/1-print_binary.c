#include"main.h"
/**
 * print_binary - prints the binary format of a number
 *@n: number to be converted
 *
 *Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	while (n > 0)
	{
		_putchar((n & 1) == 0 ? '0' : '1');
		n >>= 1;
	}
}
