#include"main.h"
#include<string.h>
/**
 * puts_half -  prints half of a string
 * @str: the string to printed half
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len, a, b, c;

	len = strlen(str);
	b = len / 2;
	c = (len - 1) / 2;
	if (len % 2 == 0)
	{
		for (a = b; a <= len - 1; a++)
		{
			_putchar(str[a]);
		}
	}
<<<<<<< HEAD
	else
	{
		for (a = c + 1; a <= len - 1; a++)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
=======
		else
		{
			for (a = c + 1; a <= len - 1; a++)
			{
				_putchar(str[a]);
			}
			_putchar('\n');
		}
>>>>>>> ab7dfb1cc5ab281d6e0a30e01fccbfa1814aad66
}
