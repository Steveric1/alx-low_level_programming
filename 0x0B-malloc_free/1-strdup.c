#include "main.h"
#include <stdlib.h>

/**
 * _strlen - function to calculate the length of string
 * @s: string
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != 0)
		len++;
	return (len);
}

/**
 * _strdup - function that duplicate
 * @str: string to duplicate
 *
 * Return: str2
 */

char *_strdup(char *str)
{
	int i, len;
	char *str2;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);
	str2 = (char *)malloc((len + 1));

	if (str2 == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		str2[i] = str[i];

	str2[len] = '\0';

	return (str2);
}
