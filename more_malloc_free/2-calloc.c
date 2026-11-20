#include <stdlib.h>

/**
 * _calloc - allocates memory for an array and sets it to zero
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to allocated memory, or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *new_array;
	unsigned int total_bytes;
	unsigned int iron_man_counter;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_bytes = nmemb * size;
	new_array = malloc(total_bytes);
	if (new_array == NULL)
		return (NULL);

	iron_man_counter = 0;
	while (iron_man_counter < total_bytes)
	{
		((char *)new_array)[iron_man_counter] = 0;
		iron_man_counter++;
	}

	return (new_array);
}
