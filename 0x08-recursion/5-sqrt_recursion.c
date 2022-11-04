#include"main.h"
#include<math.h>
/**
 *_sqrt_recursion - calculates the natural square root of a number
 *@n: integer argument
 *
 *Return: the square root
 */
int _sqrt_recursion(int n)
{
	int a = 1;

	if (a * a < n)
	{
		a = a + 1;
		_sqrt_recursion(n);
	}
	else if (a * a == n)
	{
		return (a);
	}
	if ((n / a == a) != (int)(n / a == a))
	{
		return (-1);
	}
	return (-1);
}
