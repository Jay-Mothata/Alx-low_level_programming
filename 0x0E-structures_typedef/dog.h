#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Information about a dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 *
 * A struct that stores the name, age, and owner of a dog.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}

dog;

#endif /* DOG_H */
