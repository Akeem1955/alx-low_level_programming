#include "main.h"

/**
 * print_diagsums - print chess
 * @a:poinrt to the matrix
 * @size::size of array
 * Return:0
 */

void print_diagsums(int *a, int size)
{
	int i, resA, k, n, low, high;

	low = 0;
	high = size - 1;
	resA = 0;
	resB = 0;
	for (i = 0; i < size; i++)
	{
		resA += a[i][low];
		resB += a[i][high];
		low++;
		high--;
	}
}
