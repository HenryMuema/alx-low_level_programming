#include"main.h"
/**
 *leet - encodes a string into 1337
 *@x: string to be encoded
 *
 *Return: the already encoded string
 */
char *leet(char *x)
{
	int a;

	for (a = 0; a != '\0'; a++)
	{
		if (x[a] == 'a' || x[a] == 'A')
		{
			x[a] = '4';
		}
		else if (x[a] == 'e' || x[a] == 'E')
		{
			x[a] = '3';
		}
		else if (x[a] == 'o' || x[a] == 'O')
		{
			x[a] = '0';
		}
		else if (x[a] == 't' || x[a] == 'T')
		{
			x[a] = '7';
		}
		else if (x[a] == 'l' || x[a] == 'L')
		{
			x[a] = '1';
		}
		else
		{
			x[a] = x[a];
		}
	}
	return (x);
}
