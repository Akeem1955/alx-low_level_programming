#include "main.h"
#include<stdio.h>

/**
 * print_diagsums - print chess
 * @a:poinrt to the matrix
 * @size::size of array
 * Return:0
 */

void print_diagsums(int *a, int size)
{
	int i, resA, low, high, resB;

	low = 0;
	high = size - 1;
	resA = 0;
	resB = 0;
	for (i = 0; i < size; i++)
	{
		resA = resA + a[low];
		resB = resB + a[high];
		low += size + 1;
		high += size - 1;
	}
	printf("%d, %d\n", resA, resB);
}
