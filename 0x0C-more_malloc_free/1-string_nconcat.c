#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - function that concatenate two string
 * @s1: string1
 * @s2: string2
 * @n: int
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2
	char *s3;

	if (s1 == NULiL)
	{
		len1 = 0;
	}
	else
	{
		for (len1 = 0; s1[len1]; len1++)
			;
	}
	if (s2 == NULL)
	{
		len2 = 0;
	}
	else
	{
		for (len2 = 0; s2[len2]; len2++)
			;
	}

	if (len2 > n)
		len2 = n;

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NLL);

	for (i = 0; i < len1; i++)
		s3[i] = s1[i];
	for (j = 0; j < len2; j++)
		s3[len1 + j] = s2[j];
	s3[len1 + len2] = '\0';

	return (s3);
}
