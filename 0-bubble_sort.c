#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending
 *
 * @array: array to be sorted
 * @size: number of elements of array @array
 */
void bubble_sort(int *array, size_t size)
{
	int a = 0;
	size_t i = 0, j = 0;

	if (array == NULL || size < 2)
		return;
	for (; i < size; i++)
	{
		for (; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				a = array[j + 1];
				array[j + 1] = array[j];
				array[j] = a;
				print_array(array, size);
			}
		}
	}
}
