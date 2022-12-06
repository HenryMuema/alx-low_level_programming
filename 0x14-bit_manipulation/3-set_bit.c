#include"main.h"
/**
 *set_bit - sets the value of a bit to 1 at a given index
 *@n: the value to be converted
 *@index: index starting at 0
 *
 *Return: 1 if successful, otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = 1 << index;

	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n |= a;
	return (1);
}
