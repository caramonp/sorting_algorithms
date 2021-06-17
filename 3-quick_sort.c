#include "sort.h"

/**
 * _change - change or swap two numbers.
 * @a: integer
 * @b: integer
 **/

void _change(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

}

/**
 * break_ - break or divide the array and takes the last element as pivot
 * @arry: Array
 * @minumus: first element
 * @last: The last element
 * @size: size
 * Return: integer
 **/
int break_(int *arry, int minumus, int last, size_t size)
{
	int piv;
	int i = (minumus);
	int j;

	piv = arry[last];
	for (j = minumus; j < last; j++)
	{
		if (arry[j] <= piv)
		{

			_change(&arry[i], &arry[j]);


			if (i != j)
				print_array(arry, size);

			i++;

		}
	}

	_change(&arry[i], &arry[last]);
	if (i != j)
		print_array(arry, size);

	return (i);
}

/**
 * quick_sort_array - quick_sort_array
 * @arry: arr
 * @minumus: minumus
 * @last: last
 * @size: size
 * Return: Nothing
 */
void quick_sort_array(int *arry, int minumus, int last, size_t size)
{

	int piv;

	if (minumus < last)
	{
		piv = break_(arry, minumus, last, size);
		quick_sort_array(arry, minumus, (piv - 1), size);
		quick_sort_array(arry, (piv + 1), last, size);
	}
}

/**
 * quick_sort -Sort an array using quick_sort algorithm
 * @array: array
 * @size: size
 **/
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	quick_sort_array(array, 0, size - 1, size);
}
