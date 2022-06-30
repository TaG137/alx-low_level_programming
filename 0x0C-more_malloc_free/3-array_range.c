#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* *array_range - create an array of integers
* @min: minimum number in array.
* @max: maximum number in array.
* Return: NULL (failure or min > max) or pointer
* to new array in memory.
*/

int *array_range(int min, int max)
{
  int i;
  int *pt;
  
  if (min > max)
    return (NULL);
  pt = (malloc(sizeof(int) * (max - min + 1)));
  if (pt == NULL)
    return (NULL);
  for (i = 0; min <= max; i++)
    pt[i] = min++;
  return (pt);
}
    
