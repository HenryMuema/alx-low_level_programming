#include "dog.h"
#include <stdlib.h>
/**
 *new_dog - creates new mem space for struct dog
 *@name: name identity of the pet
 *@age: how old is the pet
 *@owner: who is the owner of the dog
 *
 *Return: a pointer of type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(name) * sizeof(age) * sizeof(owner));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	(*ptr).name = name;
	(*ptr).age = age;
	(*ptr).owner = owner;
	return (ptr);
}
