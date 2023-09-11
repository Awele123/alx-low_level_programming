
#ifndef DOG_H
#define DOG_H

struct dog
{
	char *name;
	float age;
	char *owner;
};


/**
 * struct dog -dogs information
 * @name: element 1
 * @age: element 2
 * @owner element 3
 */


/**
 * dog_t - typedef for struct dog
*/
typedef struct dog dog_t;

#endif
