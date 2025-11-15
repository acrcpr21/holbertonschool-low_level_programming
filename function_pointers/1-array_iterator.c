#include "function_pointers.h"
#include <stddef.h>

/**
* array_iterator - executes a function on each element of an array
* @array: pointer to the integer array
* @size: size of the array
* @action: pointer to the function to execute on each array element
*
* array_iterator - a Function that ...
* @array: Description of array.
* @size: Description of size.
* @(*action: Description of (*action.
* Return: Description of the return value.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array == NULL || action == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
