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
	int i, j;
	int len1 = 0;
	int len2 = 0;
	char *s3;

	if (s1 == NULL)
		len1 = strlen(s1);
	if (s2 == NULL)
		len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	s3 = malloc(sizeof(char) * (len1 + n + 1));
	if (s3 == NULL)
		return (NLL);

	for (i = 0; i < len1; i++)
		s3[i] = s1[i];
	for (j = 0; j < n; j++)
		s3[len1 + j] = s2[j];
	s3[len1 + n] = '\0';

	return (s3);
}
