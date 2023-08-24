#include "monty.h"

global_t gl;
/**
 * pint - prints value of the stack
 * @stack: stack head
 * @line_number: line num
 * Return: void
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (!(*stack) || !stack)
	{
		free(gl.buffer), free_list(*stack), fclose(gl.fd);
		dprintf(STDERR_FILENO, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
