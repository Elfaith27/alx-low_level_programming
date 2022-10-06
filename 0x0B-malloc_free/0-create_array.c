#include "main.h"

/**
 * ce_array - creates a array of chars, and initializes with given char.
 * @size: Number of chars to be allocated.
 * @c: character to be placed in allocated memories.
 *
 *Return: Returns pointer to array, NULL if fail, NULL if size is 0.
 */
char *create_array(unsigned int size, char c)
{
	char *mpter;
	unsigned int i;

	if (size == 0)
		return (NULL);

	mpter = (char *)malloc(sizeof(char) * size);
	if (mpter == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(mpter + i) = c;
	*(mpter + i) = '\0';

	return (mpter);
}
