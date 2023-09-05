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

	ptr = malloc(size * sizeof(char));
	/* we have to use for loop to initialize a specific charater to it */
	for (i = 0; i < size ; i++)
	{
	ptr[i] = c;
	}

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		return (ptr);
	}

	return (ptr);
}
