#ifndef DOG_H
#define DOG_H

/**
 * struct dog - type for my dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
