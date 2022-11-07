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
	int a = 0;

	while ( x[a] != '\0')
	{
		  if (!(x[a] >= 'a' && x[a] <= 'z'))
		  {
			  if ( x[a] == '\t' || 
				x[a] == '\n' ||
				x[a] == ' ' ||
				x[a] == ',' ||
				x[a] == '.' ||
				x[a] == '!' ||
				x[a] == '?' ||
				x[a] == '"' ||
				x[a] == '(' ||
				x[a] == ')' ||
				x[a] == '{' ||
				x[a] == '}')
			  {
				  x[a + 1] -= 32;
			  }
		  }
		  else
		  {
			  a++;
		  }
	}
	return (x);
}
