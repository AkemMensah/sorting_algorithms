#include "sort.h"
/**
 * bubble_sort - sorts an array elements from min to max value
 * @array: array
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{

	size_t i, indx, tmp = 0;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
		for (indx = 0; indx < size; indx++)
		{
			if (array[indx] > array[indx + 1] && array[indx + 1])
			{
			tmp = array[indx];
			array[indx] = array[indx + 1];
			array[indx + 1] = tmp;
			print_array(array, size);
			}
		}
}
