#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given as a parameter.
 * @array: ptr
 * @size: size
 * @action: ptr
 * Return: Always (success)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}
	for (; size-- > 0;)
	{
		action(*array);
		array++;
	}
}
