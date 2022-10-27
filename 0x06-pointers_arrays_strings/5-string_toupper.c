#include"main.h"
#include<string.h>
/**
 *string_toupper -  changes all lowercase letters of a string to uppercase.
 *@a: string to be changed
 *
 *Return: changed string
 */
char *string_toupper(char *a)
{
	char str = strupr(a);
	return (str);
}
