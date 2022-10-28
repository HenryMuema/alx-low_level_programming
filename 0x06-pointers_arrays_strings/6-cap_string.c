#include"main.h"
#include<string.h>
/**
 * cap_string - capitalizes all words of the string
 *@a: sring argument
 *
 *Return: capitalized worded string
 */
char *cap_string(char *x)
{
	int a;

	for (a = 0; x[a] != '\0'; a++)
	{
		switch (x[a])
		{
			case (' '):
				x[a + 1] = x[a + 1] - 32;
				break;
			case ('	'):
				 x[a + 1] = x[a + 1] – 32;
				 break;
			case('\n'):
				 x[a + 1] = x[a + 1] – 32;
				 break;
			case(','):
				 x[a + 1] = x[a + 1] – 32;
				 break;
			case(';'):
				 x[a + 1] = x[a + 1] – 32;
				 break;
			case('.'):
				 x[a + 1] = x[a + 1] – 32;
				 break;
			case('!'):
				 x[a + 1] = x[a + 1] – 32;
				 break;
			case('?'):
				 x[a + 1] = x[a + 1] – 32;
				 break;
			case('"'):
				 x[a + 1] = x[a + 1] – 32;
				 break;
			case('('):
				 x[a + 1] = x[a + 1] – 32;
				 break;
			case(')'):
				 x[a + 1] = x[a + 1] – 32;
				 break;
			case('{'):
				 x[a + 1] = x[a + 1] – 32;
				 break;
			case('}'):
				 x[a + 1] = x[a + 1] – 32;
				 break;
			default:
				 break;
		}
		else
		{
			x[a];
		}
	}
	return (x);
}
