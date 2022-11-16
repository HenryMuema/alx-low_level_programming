#include"dog.h"
/**
 *init_dog - initializes a variable
 *@d: variable of type struct dog
 *@name: name of the pet
 *@age: how old is the pet
 *@owner: who owns the pet
 *
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	}
}
