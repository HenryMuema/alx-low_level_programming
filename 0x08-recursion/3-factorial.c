#include"main.h"
/**
 *factorial - calculates the factorial of a given number
 *@n: integer given as argument
 *
 *Return: factorial result
 */
int factorial(int n)
{
	int fact;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	if (n == 1)
	{
		return (1);
	}
	fact = n * factorial(n - 1);
	return (fact);
}
