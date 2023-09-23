#include "main.h"
/**
 * reverse_array - function name
 * @a: parameter one
 * @n: parameter two
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int s;
	int d;

	for (s = 0; s < n / 2; s++)
	{
		d = a[s];
		a[s] = a[n - 1 - s];
		a[n - 1 - s] = d;

	}
}
