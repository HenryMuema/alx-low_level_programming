#include"main.h"
#include<stdio.h>
/**
 *_sqrt_recursion - calculates the natural square root of a number
 *@n: integer argument
 *
 *Return: the square root
 */
int _sqrt_recursion(int n)
{
	int a = 0;

	if (n / a == a)
	{
		return (a);
	}
	a++;
	_sqrt_recursion(n);
	if (n / a != a)
	{
		return (-1);
	}
	return (-1);
}

