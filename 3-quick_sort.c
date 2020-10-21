#include "sort.h"

/**
 * swap - swap function
 * @a : int
 * @b : int
 * Return: void
 */

void swap(int *a, int *b)
{
	int swap = *b;

	*b = *a;
	*a = swap;
}
/**
 * quicksort - recursion function of quick sort
 * @array: unsorted array
 * @l : low int
 * @h : high int
 * @size : size of array
 * Return : void
 */
void quicksort(int *array, int h, int l, size_t size)
{
	int pivot;

	if (h < l)
	{
		pivot = partition(array, h, l, size);
		quicksort(array, h, pivot - 1, size);
		quicksort(array, pivot + 1, l, size);
	}
}

/**
 * partition - move elements smaller than pivot before it
 * and greater than pivot after
 * @array : unsorted array
 * @l : low int
 * @h : high int
 * @size : size of array
 * Return: leftside
 */
int partition(int *array, int h, int l, size_t size)
{
	int pivot = array[l], leftside = h - 1, i = 0;

	for (i = h; i < l; i++)
		if (array[i] < pivot)
		{
			leftside = leftside + 1;
			swap(&array[i], &array[leftside]);
			if (leftside != i)
				print_array(array, size);
		}
	swap(&array[l], &array[leftside + 1]);
	if (l != (leftside + 1))
		print_array(array, size);
	return (leftside + 1);
}

/**
 * quick_sort - sort an array
 * @array : unsorted array
 * @size : size of array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	quicksort(array, 0, size - 1, size);
}
