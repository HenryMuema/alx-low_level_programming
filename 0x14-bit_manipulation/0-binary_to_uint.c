#include"main.h"
#include<math.h>
#include<stddef.h>
/**
 * binary_to_uint - converts binary to  decimal
 *@ b:binary number to be  converted
 *
 * Return: converted decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, sum = 0;

	if (!b)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		sum += power(2, i) * *(b + i);
	}
	return (sum);
}
unsigned int power(int a, unsigned int b)
{
	unsigned int pow = 1, c = 0;

	while (c <= b)
	{
		pow = pow * a;
		c++;
	}
	return (pow);
}
