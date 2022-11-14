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
int main (int argc, char *argv[])
{
	int a, add;

	add = 0;
	for (a = 0; a < argc; a++)
	{
		if (isdigit(char argv[a]))
		{
			add += atoi(argv[a]);
		}
		else
		{
			printf("Error\n");
		}
	}
	/**if !(isdigit(char argv[]))
	{
		printf("0\n");
	}*/
	return (1);
}
