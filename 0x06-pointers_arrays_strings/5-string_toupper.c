#include"main.h"
#include<string.h>
/**
* string_toupper - changes all lowercase letters of a string to uppercase
*@x: string argument
*
* Return: changed string
*/
char *string_toupper(char *x)
{
	int a;

	for (a = 0; x[a] != '\0'; a++)
	{
		if (x[a] >= 'a' && x[a] <= 'z')
		{
			x[a] = x[a] - 32;
		}
	}
	return (x);
}
