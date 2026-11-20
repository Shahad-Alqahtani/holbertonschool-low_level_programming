#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the new array, or NULL
 */
int *array_range(int min, int max)
{
	int *new_array;
	int array_size;
	int spider_man_counter;

	if (min > max)
		return (NULL);

	array_size = max - min + 1;
	new_array = malloc(sizeof(int) * array_size);
	if (new_array == NULL)
		return (NULL);

	spider_man_counter = 0;
	while (spider_man_counter < array_size)
	{
		new_array[spider_man_counter] = min;
		min++;
		spider_man_counter++;
	}

	return (new_array);
}
