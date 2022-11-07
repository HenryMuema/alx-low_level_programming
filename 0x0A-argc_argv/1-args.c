#include<stdio.h>
#include<stdlib.h>
/**
 *main - prints the number of arguments passed
 *@argc: number of line arguments
 *@argv: vector of line arguments
 *
 *Return: Always 0.
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;

	return (0);
}
