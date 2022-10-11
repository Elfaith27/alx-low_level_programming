#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - details of a dog
 * @name:pointer to a dog's name
 * @age:age of dog
 * @owner:pointer to owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - synonym for struct dog
 */
typedef struct dog dog_t;

char *_strdup(char *str);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_fog(dog_t *d);

#endif /*for DOG_H*/
