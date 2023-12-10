#ifndef DOG
#define DOG
#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog- description of the dog
 * @name: name of the dog
 * @age: old of the dog
 * @owner: the person that owns the dog
 * Return: 0
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
#endif
