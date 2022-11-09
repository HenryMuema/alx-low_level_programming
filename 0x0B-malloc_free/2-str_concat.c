#include"main.h"
#include<string.h>
#include<stdlib.h>
/**
 *str_concat - concatenates two strings
 *@s1: string argument one
 *@s2: string argument two
 *
 *Return: pointer to a new mem space containing the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *a = malloc((sizeof(s1)) + (sizeof(s2)));

	a[] = strcat(s1, s2);
	if (a == NULL)
	{
		return (NULL);
	}
	return (a);
}
