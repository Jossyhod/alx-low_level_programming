#include "dog.h"

/**
 * init_dog - initializes a variale of type struc dog.
 * @d: struct dog.
 * @name: name of the dog.
 * @age: owner of the dog.
 *
 * Return: no return.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
