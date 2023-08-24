#include "monty.h"
/**
 * errorargv - asd
 */
void errorargv(void)
{
	write(STDERR_FILENO, "USAGE: monty file\n", 18);
	exit(EXIT_FAILURE);
}
