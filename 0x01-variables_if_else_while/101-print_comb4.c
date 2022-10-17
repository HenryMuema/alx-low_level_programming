#include<stdio.h>
/*  program that prints all possible different combination of thre
 *  e digits
 */

int main(void)
{
	int a, b, c;

	for (a = '0'; a <= '7'; a++)
	{
		for (b = '1'; b <= '8'; b++)
		{
			for (c ='2'; c <= '9'; c++)
			{
				if (b > a && c > b)
				{
					putchar (a);
					putchar (b);
					putchar (c);
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
