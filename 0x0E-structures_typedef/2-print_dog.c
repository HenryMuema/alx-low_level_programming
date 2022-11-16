#include"dog.h"
#include<stdio.h>
/**
 *print_dog - prints the details of  particular dog
 *@d: variable name of type struct dog
 *
 *Return: void
 */
void print_dog(struct dog *d)
{
	if ((*d).name == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("Name: %s\n", (*d).name);
	}
	if ((*d).age == 0.0)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("Age: %f\n", (*d).age);
	}
	if ((*d).owner == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
	printf("Owner: %s\n", (*d).owner);
	}
}
