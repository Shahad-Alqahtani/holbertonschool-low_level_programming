#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string, or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	unsigned int long1, long2;
	unsigned int a, b;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	long1 = 0;
	while (s1[long1] != '\0')
		long1++;

	long2 = 0;
	while (s2[long2] != '\0')
		long2++;

	new_str = malloc(sizeof(char) * (long1 + long2 + 1));
	if (new_str == NULL)
		return (NULL);

	for (a = 0; a < long1; a++)
		new_str[a] = s1[a];

	for (b = 0; b < long2; b++)
		new_str[long1 + b] = s2[b];

	new_str[long1 + long2] = '\0';

	return (new_str);
}
