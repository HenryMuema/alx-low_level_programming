#include"main.h"
#include<stdlib.h>
#include<string.h>
/**
* string_nconcat - concatenates two strings
*@s1: pointer argument which a string will be appended to
*@s2: pointer argument 
*@n: number of bytes from s2 to be appended to s1
*Return:pointer to me space with concatenated string s1
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;

	str = malloc(sizeof(s1) * n);
	if (str == NULL)
	{
		return (NULL);
	}
	*str = strncat(s1, s2, n);
	return (str);
}
