#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
 *main - adds positive numbers
 *@argc: number of line arguments
 *@argv: vector of line arguments
 *
 *Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int c, a, b, add;

	add = 0;
	if  (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (a = 1; a < argc; a++)
	{
		if (!(*argv[a] >= '0') && atoi(argv[a]) <= 0)
		{
			printf("Error\n");
			return (1);
		}
	}
	for (c = 1; c <argc; c++)
	{
		if (*argv[c] >= '0' && atoi(argv[c]) >= 0)
		{
			b = atoi(*(argv + c));
			add += b;
		}
	}
	printf("%d\n", add);
	return (0);
}
