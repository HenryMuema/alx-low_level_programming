#include<stdio.h>
#include<stdlib.h>
/**
 *main - multiplies two numbers
 *@argc: number of line arguments
 *@argv: vector of line arguments
 *
 *Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int mult, a;

	mult = 1;
	for (a = 1; a < argc; a++)
	{
		mult *= atoi(argv[a]);
	}
	printf("%d\n", mult);
	if (a == 0)
	{
		printf("Error\n");
	}
	return (1);
}
