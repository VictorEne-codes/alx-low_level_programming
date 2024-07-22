#ifndef DOG_H
#define DOG_H

/**
 * struct dog - about a dog
 * @name: member
 * @age: member
 * @owner: member
 *
 * Description: this struct describes a dog
 */

/**
 * dog_t - typedef for dog_t
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
