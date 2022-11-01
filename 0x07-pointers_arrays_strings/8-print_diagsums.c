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
	int i, j;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				printf("%d, ", *(a + i * size + j));
			}
			else
			{
				for (i = 0; i < size; i++)
				{
					for (j = size -1; j >= 0; j--)
					{
						printf("%d", *(a + i * size + j));
					}
				}
			}
		}
	}
		printf("\n");
}

