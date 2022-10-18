#include<stdio.h>

/**
 * main - prints the size of various data types
 *
 * Return: 0
 */
int main(void)
{
	prinf ("Size of a char: %dn byte(s)\n", sizeof(char));
	printf("Size of an int: %dn byte(s)\n", sizeof(int));
	printf("Size of a long int: %dn byte(s)\n", sizeof(long));
	printf("Size of a long long int: %dn byte(s)\n", sizeof(long long));
	printf("Size of a float: %dn byte(s)\n", sizeof(float));
	return(0);
}


