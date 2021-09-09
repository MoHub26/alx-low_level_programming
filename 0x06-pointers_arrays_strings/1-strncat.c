#include "main.h"

/**
 * _strncat - links n bytes from a string to another
 * @dest: destination of the string
 * @src: source of the string
 * @n: number of bytes of str to link
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
		x++;

	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';

	return (dest);
}
