#include "sort.h"
/**
 * selection_sort - sort array using
 * selection sort
 * @array: array to sort
 * @size: length of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, postn;
	int tmp;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		postn = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[postn] > array[j])
				postn = j;
		}
		if (postn != i)
		{
			tmp = array[i];
			array[i] = array[postn];
			array[postn] = tmp;
			print_array(array, size);
		}
	}
}
