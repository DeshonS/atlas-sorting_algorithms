#include "sort.h"

/**
 * part - opening of file
 * @array: pointer to array
 * @low: low value of the array
 * @high: high value of the array
 * Return: position
 */

int part(int *array, int low, int high, size_t size)
{
int pivot = array[high];
int i = low - 1;
int t, j;
for (j = low; j <= high - 1; j++)
{
if (array[j] < pivot)
{
int temp;
i++;
temp = array[i];
array[i] = array[j];
array[j] = temp;
}
}
t = array[i + 1];
array[i + 1] = array[high];
array[high] = t;
return i + 1;
print_array(array, size);
}

/**
 * quick_sort_helper - opening of file
 * @array: pointer to array
 * @low: low point in the array
 * @high: high point in the array
 * Return: none (void)
 */

void quick_sort_helper(int *array, int low, int high, size_t size)
{
if (low < high)
{
int pi = part(array, low, high, size);
quick_sort_helper(array, low, pi - 1, size);
quick_sort_helper(array, pi + 1, high, size);
}
}

/**
 * quick_sort - opening of file
 * @array: pointer to the array
 * @size: size of the array
 * Return: none (void)
 */

void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
{
return;
}
quick_sort_helper(array, 0, size - 1, size);
}
