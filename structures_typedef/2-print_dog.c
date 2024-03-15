#include "dog.h"
/**
 * print_dog - print a struct dog
 * @d: struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
		else
		{
			printf("Name: %s\n", d->name);
		}
	if (d->age < 0)
	{
		printf("Age: (nil)\n");
	}
		else
		{
			printf("Age: %lf\n", d->age);
		}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
}
