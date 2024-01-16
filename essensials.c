#include "monty.h"

/**
 * _free - free pointer and set it to NULL
 * @ptr: pointer to free (void **)
 * Return: void
 * by ashraf & ramzy
 */
void _free(void **ptr)
{
	if (*ptr)
	{
		free(*ptr);
		*ptr = NULL;
	}
}

/**
 * _malloc - allocate memory and check if it failed
 * @size: size of memory to allocate (unsigned int)
 * Return: pointer to allocated memory (void *)
 * by ashraf & ramzy
 */
void *_malloc(unsigned int size)
{
	void *str = malloc(size);

	if (!str)
	{
		_Free(str);
		printf("Error: malloc failed\n"), exit(EXIT_FAILURE);
		exit(-1);
	}
	return (str);
}

/**
 * _realloc - reallocate memory and check if it failed
 * @ptr: pointer to reallocate (void **)
 * @new_size: new size of memory to allocate (unsigned int)
 * Return: pointer to reallocated memory (void *)
 * by ashraf & ramzy
 */
void *_realloc(void *ptr, int new_size)
{
	void *temp;

	if (ptr && new_size < (int)strlen(ptr))
	{
		_Free(ptr);
		return (NULL);
	}
	temp = _malloc(new_size);
	memcpy(temp, ptr, ptr ? strlen(ptr) : 0);
	_Free(ptr);
	return (temp);
}
