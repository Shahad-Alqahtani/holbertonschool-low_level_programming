#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int result;
	int found;

	i = 0;
	sign = 1;
	result = 0;
	found = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			found = 1;
			result = result * 10 - (s[i] - '0');
		}
		else if (found == 0)
		{
			if (s[i] == '-')
				sign = -sign;
		}
		else
		{
			break;
		}
		i++;
	}

	if (sign == 1)
		return (-result);

	return (result);
}
