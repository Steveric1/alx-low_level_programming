#include "function_pointers.h"

/**
 * print_name - a function that print a name
 * @name: name given
 * @f: function of name
 *
 * Return: 0 on success
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
