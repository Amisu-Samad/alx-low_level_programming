#include "main.h"

/**
 * main - create_array
 * @size: size of array
 * @c: character to store in array
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
