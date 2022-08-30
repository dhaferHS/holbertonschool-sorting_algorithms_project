#include "sort.h"
/**
 * swap - swap
 * @a: int to swap
 * @b: int to swap
 *
 */
void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

/**
 * partition - find the partition position
 * @array: array
 * @low: lowest index
 * @high: highest index
 * @size: size of array
 * Return: partition point
 */
int partition(int *array, int low, int high, size_t size)
{
	int j;

	int pivot = array[high];

	int i = (low - 1);

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{

			i++;

			swap(&array[i], &array[j]);
				}
	}

	swap(&array[i + 1], &array[high]);
	print_array(array, size);

	return (i + 1);
}

/**
 * quicksort - quicksort
 * @array: array
 * @low: lowest index
 * @high: highest index
 * @size: size of array
 */
void quicksort(int *array, int low, int high, size_t size)
{
	if (low < high)
	{

		int pi = partition(array, low, high, size);

		quicksort(array, low, pi - 1, size);
		quicksort(array, pi + 1, high, size);
	}
}

/**
 * quick_sort - quick sort
 * @array: array
 * @size: size of array
 *
 */
void quick_sort(int *array, size_t size)
{

	quicksort(array, 0, size - 1, size);
}
