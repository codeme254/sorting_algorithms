#include "sort.h"
/**
 * selection_sort - sorts an array using the section sort algorithm
 * @array: the input array
 * @size: size of the input array
 */
void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int tmp;
	size_t smallestIdx;

	for (i = 0; i < size - 1; i++)
	{
		smallestIdx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[smallestIdx])
				smallestIdx = j;
		}
		if (smallestIdx == i)
			continue;
		tmp = array[i];

		array[i] = array[smallestIdx];
		array[smallestIdx] = tmp;
		print_array(array, size);
	}
}
