#include "monty.h"
/**
 * errounk - know the errors
 * @line: line
 * @aux: aux
 */
void errounk(unsigned int line, char *aux)
{
	int i = 0;

	while (aux[i])
	{
		if (aux[i] == ' ')
			break;
	i++;
	}
	vprintf(2, "L%u: unknown instruction %s\n", line, aux);
	aux[i] = ' ';
	free(aux);
	exit(EXIT_FAILURE);
}
