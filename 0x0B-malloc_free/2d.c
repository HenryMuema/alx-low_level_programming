#include"main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 *alloc_grid - creates and initializes each elememnt of the grid to 0
 *@width: nummber of columns
 *@height: number of rows
 *
 *Return: a pointer toa two dimensiional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **a = malloc((height * width) * sizeof(int));
	int b, c;

	if (width <= 0 || height <= 0)
	{
		free(a);
		return (NULL);
	}
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (b = 0; b < height; b++)
	{
		for (c = 0; c < width; c++)
		{
			a[b][c] = 0;
		}
	}
	free(a);
	return (a);
}
