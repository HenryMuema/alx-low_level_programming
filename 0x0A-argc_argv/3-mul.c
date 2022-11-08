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
	if (argc < 2)
	{
		printf("Error\n");
	}
	else
	{
	for (a = 1; a < argc; a++)
	{
		mult *= atoi(argv[a]);
	}
	printf("%d\n", mult);
	}
	return (1);
}
