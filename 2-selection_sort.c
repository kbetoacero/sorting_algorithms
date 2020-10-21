#include "sort.h"

/**
 * swap - swap function
 *@a : int
 *@b : int
 * Return: void
 */

void swap(int *a, int *b)
{
	int swap = *b;

	*b = *a;
	*a = swap;
}
/**
 * selection_sort - selection sorting algorithm
 * @array : unsorted array
 * @size : size of array
 * Return : void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
			if (min != i)
			{
				swap(&array[i], &array[min]);
				print_array(array, size);
			}
	}
}
