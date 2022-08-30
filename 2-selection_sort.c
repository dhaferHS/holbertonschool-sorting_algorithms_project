#include "sort.h"
/**
 * swap - swap items
 *
 * @xp: fiest item
 * @yp: next item
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 * selection_sort - sort algo
 * @array: just an array
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	size_t min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min])
				min = j;

		if (min != i)
		{
			swap(&array[min], &array[i]);
			print_array(array, size);
		}
	}
}
