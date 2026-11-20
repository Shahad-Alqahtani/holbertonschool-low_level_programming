#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2
 * Return: pointer to new string, or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int spider_man_counter, iron_man_counter;
	unsigned int captain_america_counter, thor_counter;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	spider_man_counter = 0;
	while (s1[spider_man_counter])
		spider_man_counter++;

	iron_man_counter = 0;
	while (s2[iron_man_counter] && iron_man_counter < n)
		iron_man_counter++;

	new_str = malloc(spider_man_counter + iron_man_counter + 1);
	if (new_str == NULL)
		return (NULL);

	captain_america_counter = 0;
	while (captain_america_counter < spider_man_counter)
	{
		new_str[captain_america_counter] = s1[captain_america_counter];
		captain_america_counter++;
	}

	thor_counter = 0;
	while (thor_counter < iron_man_counter)
	{
		new_str[captain_america_counter++] = s2[thor_counter++];
	}
	new_str[captain_america_counter] = '\0';

	return (new_str);
}
