#include "search_algos.h"
#include <stddef.h>

/**
 * linear_search - Searches for a value in an array of integers \
 *		Using the linear search algorithm
 *
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for.
 *
 * Return: -1 if value is NULL or not in array.
 *		otherwise value.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
		return (-1);

	while (index < size)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (value == array[index])
			return (index);

		index++;
	}

	return (-1);
}
