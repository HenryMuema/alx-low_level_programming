#include"main.h"
#include<stdio.h>
/**
 *leet - encodes a string to 1337
 *@x: string t be encoded
 *Return: encoded string
 */
char *leet(char *x)
{
	int a, b;
	char rg1[] = "eEoOtTlLaA";
	char rg2[] = "3300771144";

	for (a = 0; x[a] !='\0'; a++)
	{
		if ((x[a] >= 'a' && x[a] <= 'z') || (x[a] >= 'A' && x[a] <= 'Z'))
		{
			for (b = 0; rg1[b] !='\0'; b++)
			{
				rg1[b] = rg2[b];
			}
		}
		x[a] = rg1[a];
	}
	printf("\n");
	return (x);
}

