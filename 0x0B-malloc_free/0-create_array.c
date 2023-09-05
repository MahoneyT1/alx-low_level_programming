#include <stdlib.h>

/**
 * create_array - Function to create an array in the heep memory
 * @size: takes input from the user
 * @c: a variable used to fill in the created array
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
