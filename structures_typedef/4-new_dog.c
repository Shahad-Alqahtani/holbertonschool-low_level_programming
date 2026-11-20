#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	char *dog_name;
	char *dog_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	dog_name = malloc(strlen(name) + 1);
	if (dog_name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	dog_owner = malloc(strlen(owner) + 1);
	if (dog_owner == NULL)
	{
		free(dog_name);
		free(my_dog);
		return (NULL);
	}

	strcpy(dog_name, name);
	strcpy(dog_owner, owner);

	my_dog->name = dog_name;
	my_dog->age = age;
	my_dog->owner = dog_owner;

	return (my_dog);
}
