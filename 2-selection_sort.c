#include "sort.h"

/**
 * selection_sort - sorts a list of int in asc. order
 *
 * @size: the size of the array
 * @array: the array to sort
 *
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
size_t step, i, min_idx, temp;

if (size < 2 || !array)
{
return;
}
for (step = 0; step < size - 1; step++)
{
min_idx = step;
i = step + 1;
while (i < size)
{
if (array[i] < array[min_idx])
min_idx = i;
i++;
}
if (min_idx != step)
{
temp = array[min_idx];
array[min_idx] = array[step];
array[step] = temp;
print_array(array, size);
}
}
}
