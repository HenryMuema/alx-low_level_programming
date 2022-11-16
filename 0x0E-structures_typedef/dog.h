#ifndef DOG_H
#define DOG_H
/**
 *sruct dog - dog  identity
 *@name: name of the dog
 *@age: how old is the dog
 *@owner: who owns the dog
 *
 *Description: basic pet details are given
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
