#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: length to be returned
 * Owned by Steveric1
 * Return: 0 on success
 */
int _strlen(char *s)
{
	int n;
	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}
