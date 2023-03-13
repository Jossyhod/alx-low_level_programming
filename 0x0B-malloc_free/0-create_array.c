#include "main.h"
#include <stdlib.h>

/**
 * create_array - functions that creates an array of char.
 * @size: size of the array.
 * @c: storage char.
 *
 * Return: pointer of the array of char.
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] = c;

	return (cr);
}
