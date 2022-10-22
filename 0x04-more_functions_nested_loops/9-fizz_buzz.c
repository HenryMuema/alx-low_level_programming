#include "main.h"
#include<stdio.h>
/**
 * main - prints 1 to 100 where multiples of 3, 5 or both are printed
 * fizz, buzz and fizzbuzz respectively
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", a);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
