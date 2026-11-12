#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to reverse
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i;
	int len;
	char temp;

	len = 0;
	i = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	while (i < len / 2)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
		i++;
	}
}
