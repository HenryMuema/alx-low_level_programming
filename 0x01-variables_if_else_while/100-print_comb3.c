#include<stdio.h>

/*
 * program that prints all possible different combinations of two
 * digits
 */
int main (void)
{
	int a, b;

	for (a = '0'; a <= '8'; a++)
	{
		for (b ='1'; b <= '9'; b++)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
