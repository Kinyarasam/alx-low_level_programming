#include "search_algos.h"

/**
 * _binary_search - Searches for a value in a sorted array
 *	of integers using binary search.
 * @array: A pointer to the first element of the array.
 * @left: The starting index of the sub array to search
 * @right: The ending index of the sub array to search
 * @value: The value to search for.
 *
 * Return: -1 if value is not present or array is NULL.
 *		otherwise, the index where the value is located.
 *
 * Description: Prints the sub array being searched for.
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t idx;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (idx = left; idx < right; idx++)
			printf("%d", array[idx]);

		printf("%d\n", array[idx]);

		idx = left + (right - left) / 2;
		if (array[idx] == value)
			return (idx);

		if (array[idx] > value)
			right = idx - 1;
		else
			left = idx + 1;
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 *		using the Exponential Search Algorithm.
 * @array: pointer to the first element in the array.
 * @size: number of elements in the array
 * @value: value to search for.
 *
 * Return: -1 if array is NULL or value not in array.
 *		otherwise - index of key.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t idx = 0, start;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (idx = 1; idx < size && array[idx] <= value; idx = idx * 2)
			printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
	}

	start = idx < size ? idx : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", idx / 2, start);
	return (_binary_search(array, idx / 2, start, value));
}
