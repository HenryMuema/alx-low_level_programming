#include "main.h"
/**
 *is_prime_number - checks for a prime number
 *@n: integer argument
 *
 *Return: 1 if prime number, ohterwise 0.
 */
int is_prime_number(int n)
{
	int a, i;

	i = n - 1;
	if (i < 2)
	{
		return (0);
	}
	a = n % i;
	if (a == 0)
	{
		return (0);
	}
	if (a != 0)
	{
		i--;
		return(is_prime_number(n));
		return (1);
	}
	return (0);
}
