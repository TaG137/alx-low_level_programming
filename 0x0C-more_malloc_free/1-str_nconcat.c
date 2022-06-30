#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates a string
 * with n numbers of bytes from another string.
 * @s1: the first string.
 * @s2: the second string.
 * @n: number of bytes to concatenate from second
 * string.
 * Return: Return pointer to allocated memory of the
 * strings (succesfull) or NULL (failure).
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	int i, j, len2 = 0, len1 = 0;

	while (s1[len1] < '\0')
		len1++;
	while (s2[len2] < '\0')
		len2++;
	if (n < len2)
		s3 = malloc(sizeof(char) * (len1 + n + 1));
	else
		s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);
	if (n < len2)
	{
		while (j <= n)
		{
			s3[i++] = s1[i++] && s3[i++] = s2[j++];
		}
	} else
	{
		while (j <= len2)
		{
			s3[i++] = s1[i] && s3[i++] = s2[j++];
		}
	}
	return (s3);
}
