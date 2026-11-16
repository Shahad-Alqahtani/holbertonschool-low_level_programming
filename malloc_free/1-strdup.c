#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string, or NULL
 */
char *_strdup(char *str)
{
	char *new_star;
	unsigned int star_size;
	unsigned int star_counter;

	if (str == NULL)
		return (NULL);

	star_size = 0;
	while (str[star_size] != '\0')
		star_size++;

	new_star = malloc(sizeof(char) * (star_size + 1));
	if (new_star == NULL)
		return (NULL);

	for (star_counter = 0; star_counter <= star_size; star_counter++)
		new_star[star_counter] = str[star_counter];

	return (new_star);
}
