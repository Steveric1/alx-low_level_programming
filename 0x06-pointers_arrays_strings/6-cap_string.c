#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @str: string
 * Return: address of s
 */
char *cap_string(char *str)
{
	int i = 0;
	char a[] = "\t\n,;.!?\"(){}";

	while (*(str + i))
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			if (i == 0)
				*(str + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (*(str + i - 1) == a[j])
						*(str + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (str);
}
