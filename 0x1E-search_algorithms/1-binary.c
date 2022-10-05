#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers \
 *		using the Binary search algorithm
 * @array: pointer to the first element of the array to search.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * Return: -1 if value is not in array or array is NULL
 *		otherwise - value.
 */
int binary_search(int *array, size_t size, int value)
{
	int mid_index, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (mid_index = left; mid_index < right; mid_index++)
			printf("%d, ", array[mid_index]);
		printf("%d\n", array[mid_index]);

		mid_index = left + (right - left) / 2;
		if (array[mid_index == value])
			return (value);

		if (array[mid_index] > value)
			right = mid_index - 1;
		else
			left = mid_index + 1;
	}

	return (-1);
}
