#include "dog.h"
#include "string.h"
#include <stdlib.h>

/*
 * init_dog - initialize a varible of type struct dog
 * @d: pointer variable to struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * return: 0 on success
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
