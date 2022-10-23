#include<stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */
int main(void)
{
	int i;

	printf("Infinte loop incoming :(\n");

	i = 0;

	/** the below line is causing an infite loop */
	while (i > 10)
	{
		putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
