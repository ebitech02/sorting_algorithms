#include "sort.h"

/**
 * bubble_sort - sorts an array of integers
 *
 * @array: array of integers to be sorted
 * @size: size of array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	int swap_num; 
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		swap_num = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_num = 1;
				fn_swap(&array[j] &array[j + 1]);
				print_array(array, size);
			}
		}
		if (swap_num == 0)
			break;
	}
}


/**
 * fn_swap - swap the variables
 *
 * @var1: the first variable
 * @var2: the second variable
 *
 * Return: void
 */

void fn_swap(int *var1, int *var2)
{
	int temp;

	temp = *var1;
	*var1 = *var2;
	*var2 = temp;
}
