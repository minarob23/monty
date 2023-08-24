#include "monty.h"
/**
 * erroargv - know errorsargv
 */
void erroargv(void)
{
	write(STDERR_FILENO, "USAGE: monty file\n", 18);
	exit(EXIT_FAILURE);
}
