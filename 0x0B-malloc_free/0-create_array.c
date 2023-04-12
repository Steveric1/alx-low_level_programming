#include "main.h"
#include <stdlib.h>

/**
 * create_array - create and initialize a char array
 * @size: size of the array to create
 * @c: initial value to fill array
 * Return: pointer to created array
 */

char *create_array(unsigned int size, char c)
{
	char *str = malloc(size * sizeof(char));
	int i;

	if (str == NULL)
		return (1);
	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
