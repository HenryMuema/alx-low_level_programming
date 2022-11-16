#ifndef DOG_H
#define DOG_H
/**
 *struct dog - dog identity
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
/**
 *dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
