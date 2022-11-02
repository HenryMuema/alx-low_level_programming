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
	int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += *(a + i * size + j);
			}
			if ((i + j) == (size - 1))
			{
				sum2 += *(a + j * size + i);
			}
		}
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
