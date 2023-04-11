#include "main.h"

/**
 * _islower - check if character is a lowercase.
 * @c: The character is to checked.
 *
 * Return: 1 if the character is lowercase else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
