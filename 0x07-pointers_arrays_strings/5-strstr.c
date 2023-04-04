#include <stdlib.h>
#include "holberton.h"
/**
* _strstr - locates a substring
*
* @haystack: the longer string to search
* @needle: the substring to search for
*
* Return: a pointer to the beginning of the located substring, or NULL if
* the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;
	int len1 = strlen(haystack);
	int len2 = strlen(needle);

	for (i = 0; i < len1; i++)
	{
		for (j = i, k = 0; k < len2; j++, k++)
		{
			if (haystack[j] != needle[k])
				break;
		}
		if (k == len2)
			return (haystack + i);
	}

	return (NULL);
}
