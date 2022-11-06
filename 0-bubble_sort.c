#include "sort.h"

/**
 * bubble_sort - Sort an array of integers in ascending ordeer
 * @array: An array of integers to sort
 * @size: The size of the array
 * Return: Void
 */

void bubble_sort(int *array, size_t size)
{
	int swap, swapped;
	size_t i;

	if (array == NULL || size < 2)
		return;

	while (swapped)
	{
		swapped = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swapped = 1;
				swap = array[i + 1];
				array[i + 1] = array[i];
				array[i] = swap;
				print_array(array, size);
			}
		}
	}
}
