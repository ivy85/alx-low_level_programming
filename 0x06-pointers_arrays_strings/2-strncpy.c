#include "main.h"

/**
 * _strncpy - copies a strig with n
 * @dest: copy to
 * @src: copy from
 * @n: number of character to be copied
 * Return:
 * dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = o;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}