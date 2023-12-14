#include "shell.h"

/**
 * _strncpy - Has been made for this purpose - Copies a string.
 * @dest: This is the destination string to be copied to.
 * @src: This is the source string.
 * @n: The no. of characters to be copied.
 *
 * Return: The concatenated string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return s;
}

/**
 * _strncat - Concatenates two strings.
 * @dest: The first string.
 * @src: The second string.
 * @n: The number of bytes to be maximally used.
 *
 * Return: The concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	return s;
}

/**
 * _strchr - Locates a character in a string.
 * @s: The string to be parsed.
 * @c: The character to look for.
 *
 * Return: A pointer to the memory area s.
 */
char *_strchr(char *s, char c)
{
	do
	{
		if (*s == c)
			return s;
	} while (*s++ != '\0');

	return NULL;
}
