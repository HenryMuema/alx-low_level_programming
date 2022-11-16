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
	if ((*d).name == NULL || (*d).age == 0.0 || (*d).owner == NULL)
	{
		printf("(nil)");
	}
	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
