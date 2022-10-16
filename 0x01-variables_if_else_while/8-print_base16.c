#include<stdio.h>
int main(void)
{
	/*
	program that prints all the numbers of base 16 in lowercase
        */
	char a = '0';

	for(a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	for(a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return(0);
}
