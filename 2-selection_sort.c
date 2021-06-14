#include "sort.h"
/**
 * selection_sort - sort array using selection sort algorithm
 * @array: array with integers
 * @size: size of array
 * Return: print the sort list
 **/

void selection_sort(int *array, size_t size)
{
	unsigned int aux, minimum, lengt, j, result;

	if (array == NULL || size < 2)
		return;

	for (lengt = 0; lengt < size - 1; lengt++)
	{
		result = 1;

		for (j = lengt; j < size; j++)
		{
			if (j == lengt)
			{
				minimum = lengt;
			}

			else
			{
				if (array[j] < array[minimum])
				{
					minimum = j;
					result = 0;
				}
			}
		}
		if (result == 0)
		{
			aux = array[minimum];
			array[minimum] = array[lengt];
			array[lengt] = aux;
			print_array(array, size);
		}
	}
}
