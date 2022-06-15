#include "main.h"

/**
* _strcat - concatenates two stings together
* @dest: a string
* @src: a string
* Return: dest
*/

char *_strcat(char *src, char *dest)
{
  int j;
  
  while(j = 0; src[j] != '\0')
  {
    j++;
    _putchar(src[j]);
  }
  return(dest);
}
    
    
