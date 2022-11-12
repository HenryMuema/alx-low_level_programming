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
	int a, b, add;

	add = 0;
	for (a = 0; a < argc; a++)
	{
		if (!(*argv[a] >= '0' && *argv[a] <= '9'))
		{
		printf("0\n");
		break;
		}
		if (*argv[a] >= '0' && *argv[a] <= '9')
		{
			b = atoi(argv[a]);
			add += b;
		}
		else
		{
			printf("Error\n");
			break;
		}
	}
	return (1);
}
