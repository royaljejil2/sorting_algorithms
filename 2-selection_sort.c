#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t m, z;

	if (array == NULL || size < 2)
		return;

	for (m = 0; m < size - 1; m++)
	{
		min = array + m;
		for (z = m + 1; z < size; z++)
			min = (array[z] < *min) ? (array + z) : min;

		if ((array + m) != min)
		{
			swap_ints(array + m, min);
			print_array(array, size);
		}
	}
}
