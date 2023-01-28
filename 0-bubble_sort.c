#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * swap - swap to number
 * @xp: an input integer
 * @yp: another input integer
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
/**
 * bubble_sort - sorts an array of integers in ascending
 *
 * @array: array to be sorted
 * @size: number of elements of array @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;

	if (array == NULL || size < 2)
		return;
	for (; i < size; i++)
	{
		for (; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
