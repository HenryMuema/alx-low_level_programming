#include"main.h"
#include<stdlib.h>
/**
 *malloc_checked - allocates memory
 *@b:nummber of bytes to be allocated
 *
 *Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *str;

	str = malloc(b);
	if (str == NULL)
	{
		exit(98);
	}
	return (str);
}
