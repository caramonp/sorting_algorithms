#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers
 * @array: array with integers
 * @size: size of the array
 * Return: list sorted
 **/


void bubble_sort(int *array, size_t size)
{
	int aux;
	size_t i, j;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				aux = array[j];
				array[j] = array[j + 1];
				array[j + 1] = aux;
				print_array(array, size);
			}
		}
	}
}
