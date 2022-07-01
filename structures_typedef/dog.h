#ifndef HEADER
#define HEADER

/**
 * struct dog - Struc that contains the following elements.
 *
 * @name: Name of some dog.
 * @age: Age of a dog.
 * @owner: Dog owner name.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - Typedef for struct
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
