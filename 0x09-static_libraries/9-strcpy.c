#include "main.h"

/**
 * _strcpy - a function that  copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed toby the dest.
 *
 * @dest: A pointer to destination of string
 * @src: A pointer to the source string to copy from
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
		*dest++ = *src++;
	return (aux);
}
