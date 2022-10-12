#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Free dog.
 * @d: Pointer to type dog_t.
 * Return: No return value.
 */
void free_dog(dog_t *dog)
{
	if (dog)
	{
		if (dog->name)
			free(dog->name);
		if (dog->owner)
			free(dog->owner);
		free(dog);
	}
}
