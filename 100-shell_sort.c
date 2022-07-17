#include "sort.h"
/**
 * shell_sort - sort array of ints
 * using shell sort
 * @array: to be sorted
 * @size: sizeof(array)
 */
void shell_sort(int *array, size_t size)
{
	size_t intval, i, j;
	int tmp;

	if (array == NULL || size < 2)
		return;
	for (intval = 1; intval < (size / 3); intval = intval * 3 + 1)
		;
	for (; intval >= 1; intval /= 3)
	{
		for (i = intval; i < size; i++)
		{
			j = i;
			while (j >= intval && array[j - intval] > array[j])
			{
				tmp = array[j];
				array[j] = array[j - intval];
				array[j - intval] = tmp;
				j -= intval;
			}
		}
		print_array(array, size);
	}
}
