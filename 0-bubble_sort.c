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
 * bubble_sort - sorts an array of integers in ascending order using
 * the Bubble sort algorithm
 * @array: array to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int check = 1, test;

	if (array == NULL)
	{
		return;
	}

	while (check)
	{
		test = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(&array[i], &array[i + 1]);
				print_array(array, size);
				test++;
			}
		}
		if (test == 0)
		{
			check = check * 0;
		}
	}
}
