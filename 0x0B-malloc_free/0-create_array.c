#include"main.h"
#include<stdlib.h>
/**
 *create_array - creates an array of chars,initializes it with a specific char
 *@size: size of the memory
 *@c: input character
 *
 *Return: a pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *arr;

	arr =(char*) malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			arr[a] = c;
		}
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	return (arr);
}
