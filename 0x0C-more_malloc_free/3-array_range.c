#include "main.h"
#include <stdlib.h>


/**
 * array_range - function that creates an array of integers
 * @min: min int
 * @max: max int
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int i, n;
	int *ptr;

	if (min > max)
		return (NULL);

	n = (max - min) + 1;
	ptr = malloc(sizeof(int) * n);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		ptr[i] = min + i;

	return (ptr);
}
