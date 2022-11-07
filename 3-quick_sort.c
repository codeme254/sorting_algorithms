#include "sort.h"

/**
 * pivot_idx - finds the index of the pivot
 * @arr: array where the pivot index is being looked for
 * @low: the lower index to start at
 * @high: the higher index to end at
 * @size: the size of the array, helps in printing the array  after swap
 * Return: the index of the pivot
*/
int pivot_idx(int *arr, int low, int high, size_t size)
{
	int pivot;
	int i;
	int j;
	int temp;

	i = low;
	j = low;
	pivot = arr[high];

	for (j = low; j < high; j++)
	{
		if (arr[j] <= pivot)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			/*print_array(arr, size);*/
		}
	}
	temp = arr[i];
	arr[i] = arr[high];
	arr[high] = temp;
	print_array(arr, size);
	return (i);
}

/**
 *quick_sort_recursion - does a recursive quick sort on an array
 *@array: the array we are doing the quick sort on
 *@low: the lower index to start at
 *@high: the higher index to end at
 *@size: the size of the array, helps in printing the array
*/
void quick_sort_recursion(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot_index = pivot_idx(array, low, high, size);

		quick_sort_recursion(array, low, pivot_index - 1, size);
		quick_sort_recursion(array, pivot_index + 1, high, size);
	}
}

/**
 * quick_sort - calls the quick sort recursion function
 * @array: the array we are doing the quick sort on
 * @size: the size of the array we are sorting
*/
void quick_sort(int *array, size_t size)
{
	quick_sort_recursion(array, 0, size - 1, size);
}
