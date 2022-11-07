#include"main.h"
#include<string.h>
/**
 *set_string - sets the value of a pointer to a char
 *@s: pointer to pointer
 *@to: pointer
 *
 *Return: void
 */
 void set_string(char **s, char *to)
{
	int a;

	for (a = 0; to[a] != '\0'; a++)
	{
		**s = *(to + a);
	}
}
