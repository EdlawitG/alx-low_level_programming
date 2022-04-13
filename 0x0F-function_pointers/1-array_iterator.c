#include "function_pointers.h"
/**
 * array_iterator - fuction to iterate given array
 * @array: array parameter
 * @size: size of the array
 * @action: fuction pointer
 * Return : nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	for(size_t i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
