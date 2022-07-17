#include "sort.h"
/**
 * bubble_sort - sort array of int
 * in ascending order using Bubble sort
 *
 * @array: array to be sorted
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int tmp;

	size_t n = 0;

	if (array == NULL || size < 2)
		return;
	while (n < size)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
		}
		n += 1;
	}
}
