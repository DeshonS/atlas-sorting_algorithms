#include "sort.h"

/**
 * selection_sort - opening of file
 * @array: pointer to the array
 * @size: size of the array
 * Return: none (void)
 */

void selection_sort(int *array, size_t size)
{
size_t i, j, min, temp;

for (i = 0; i < size - 1; i++)
{
min = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[min])
{
min = j;
}
}
if (min != i)
{
temp = array[min];
array[min] = array[i];
array[i] = temp;
print_array(array, size);
}
}
}
