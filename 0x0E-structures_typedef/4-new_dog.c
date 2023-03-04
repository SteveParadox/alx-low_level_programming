#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: a pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    char *name_copy, *owner_copy;
    int name_len, owner_len;

    /* allocate memory for the new dog struct */
    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    /* copy the name and owner strings */
    for (name_len = 0; name[name_len] != '\0'; name_len++)
        ;
    name_copy = malloc(sizeof(char) * (name_len + 1));
    if (name_copy == NULL)
    {
        free(new_dog);
        return (NULL);
    }
    for (owner_len = 0; owner[owner_len] != '\0'; owner_len++)
        ;
    owner_copy = malloc(sizeof(char) * (owner_len + 1));
    if (owner_copy == NULL)
    {
        free(name_copy);
        free(new_dog);
        return (NULL);
    }
    for (int i = 0; i <= name_len; i++)
        name_copy[i] = name[i];
    for (int i = 0; i <= owner_len; i++)
        owner_copy[i] = owner[i];

    /* initialize the new dog struct */
    new_dog->name = name_copy;
    new_dog->age = age;
    new_dog->owner = owner_copy;

    /* return the new dog */
    return (new_dog);
}
