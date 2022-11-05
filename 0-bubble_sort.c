#include "sort.h"

/**
 *bubble_sort - sorts an array using the bubble sort algorithm
 *@array: the array to be sorted
 *@size: size of the array to be sorted
*/

void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;

	/*bool swapped;*/

	for (i = 0; i < size; i++)
	{
		/*swapped = false;*/

		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int tmp = array[j];

				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);

				/*swapped = true;*/
			}
		}

	}
}

