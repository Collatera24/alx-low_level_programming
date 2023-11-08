#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Copy name and owner to create a new dog
 * @name: Pointer to string: Dog's name
 * @age: The dog's age
 * @owner: Pointer to the string: Owner's name
 * Return: Pointer to new dog_t or NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));
	char *name_copy, *owner_copy;

	if (new_dog == NULL)
		return (NULL);

	name_copy = malloc(strlen(name) + 1);
	owner_copy = malloc(strlen(owner) + 1);

	if (name_copy == NULL || owner_copy == NULL)
	{
		free(new_dog);
		free(name_copy);
		free(owner_copy);
		return (NULL);
	}

	strcpy(name_copy, name);
	strcpy(owner_copy, owner);

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);

}
