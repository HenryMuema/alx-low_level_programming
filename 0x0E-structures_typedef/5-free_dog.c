#include"dog.h"
#include<stdlib.h>
/**
 *free_dog - frees the memory previously allocated
 *@d: argument whose mem space is to be freed
 *
 *Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
