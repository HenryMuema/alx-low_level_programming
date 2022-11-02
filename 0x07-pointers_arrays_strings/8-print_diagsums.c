#include"main.h"
#include<stdio.h>
/**
 *print_diagsums - prints the sum of the 2 diagonals of sq matrix of integer
 *@a: the square matrix
 *@size: number of rows/columns in the matrix
 *
 *Return: sums
 */
void print_diagsums(int *a, int size)
{
	int b, c;

	/**sum1 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += *(a + i * size + j);
			}
		}
	}
	printf("%d", sum1);
	printf("\n");*/
	for (b = 0; b < size; b++)
	{
		for (c = size - 1; c >= 0; c--)
		{
			printf("%d, ", *(a + b* size + c));
		}
	}
		printf("\n");
		printf("\n");
}

