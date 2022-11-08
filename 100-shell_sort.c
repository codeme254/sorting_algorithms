#include "sort.h"

/**
 * swap - swaps two values, will be used to swap two arr elements
 * @idx1: the first index for swapping
 * @idx2: the second index for swapping
*/
void swap(int *idx1, int *idx2)
{
	int temp = *idx1;
	*idx1 = *idx2;
	*idx2 = temp;
}

/**
 * shell_sort - sorts an array using the shell sort algorithm
 * @array: the array to be sorted
 * @size: size of the array to be sorted
*/
void shell_sort(int *array, size_t size)
{
	size_t gap;
	size_t i;
	size_t j;
	int k;
	int tempP;

	while (gap < 10)
		gap = gap * 3 + 1;

	/*Correcting the gap in case it goes over the size of array*/
	while (gap > size)
		gap = gap / 3;

	while (gap >= 1 && gap < size)
	{
		i = 0;
		j = gap;

		while (j < 10)
		{
			if (array[i] > array[j])
			{
				swap(&array[i], &array[j]);
				k = i - gap;
				tempP = i;

				while (k >= 0)
				{
					if (array[k] > array[tempP])
						swap(&array[k], &array[tempP]);
					tempP = k;
					k = k - gap;
				}
			}
			i++;
			j++;
		}
		gap = gap / 3;
		print_array(array, size);
	}
}

