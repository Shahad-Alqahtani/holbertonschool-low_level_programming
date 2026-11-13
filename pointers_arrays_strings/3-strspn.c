#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: characters to accept
 *
 * Return: number of accepted bytes at the beginning of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int count;

	i = 0;
	count = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0' && s[i] != accept[j])
		{
			j++;
		}

		if (accept[j] == '\0')
		{
			break;
		}

		count++;
		i++;
	}

	return (count);
}
