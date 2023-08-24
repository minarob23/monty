#include "monty.h"
/**
 * isEmpty - verify if buffer empty
 * @buffer: buffer
 * Return: 1 empty, 0 not
 */
int isEmpty(char *buffer)
{
	int i = 0;

	while (buffer[i])
	{
		if (buffer[i] != ' ' && buffer[i] != '\t')
			return (0);
		i++;
	}

	return (1);
}
