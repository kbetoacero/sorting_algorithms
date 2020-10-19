#include "sort.h"

/**
 * swap - swap function
 *@a : int
 *@b : int
 * Return: void
 */

void swap(int *a, int *b)
{
	int tmp = 0;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

/**
 * bubble_sort - bubble_sort function
 *@array : array
 *@size : size
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j;

	while (size >= 2 && i < size)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
		i++;
	}
}
