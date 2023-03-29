#include "main.h"

/**
 * rev_string - function that reverse a string
 * @s: char check
 * Owned by Steveric1
 * Return: 0 on success
 */
void rev_string(char *s)
{
	int i, n, temp;

	i = 0;

	while (s[i] != '\0')
		i++;
	for (n = 0; n < i / 2; n++)
	{
		temp = s[n];
		s[n] = s[i - n  - 1];
		s[i - n - 1] = temp;
	}
