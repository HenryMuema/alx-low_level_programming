#include"main.h"
/**
 *clear_bit - sets the value of a bit to 0 at a given index
 *@n: number to be altered with
 *@index: the index
 *
 * Return: 1 if it worked, -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	unsigned int a, b = 1 << index;

	a = ~b;

	*n &= a;
	return (1);
}
