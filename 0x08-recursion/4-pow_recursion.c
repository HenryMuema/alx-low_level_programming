#include"main.h"
/**
 *_pow_recursion - calculates the value of x raised to the power of y
 *@x: integer argument
 *@y: power index
 *
 *Return: value of x raised to the power y
 */
int _pow_recursion(int x, int y)
{
	int pow;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	y--;
	pow = x * _pow_recursion(x, y);
	return (pow);
}
