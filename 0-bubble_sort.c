#include "sort.h"

/**
 * bubble_sort - sorts an array of int in ascending order
 *
 * @array: the array to sort
 * @size: the size of the array input
 *
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
size_t i, j;
int temp;

if (size >= 2)
{
i = 0;
while (i < size - 1)
{
j = 0;
while (j < size - 1)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
print_array(array, size);
}
j++;
}
i++;
}
}
}
