#include"main.h"
#include <stdlib.h>
#include<string.h>
/**
 *_strdup - returns a pointer to a new string which is a duplicate of str
 *@str: string arguments
 *
 *Return: pointer with the duplicate of str
 */
char *_strdup(char *str)
{
	char *b = malloc(3);
	char *a = strdup(str);

	if (str == NULL)
	{
		return (NULL);
	}
	if (a == NULL)
	{
		return (NULL);
	}
	return (a);
}
