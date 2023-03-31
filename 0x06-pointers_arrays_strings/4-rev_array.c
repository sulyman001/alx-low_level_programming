#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: array to be evaluated
 * @n: size of a
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
