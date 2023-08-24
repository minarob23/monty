#include "monty.h"
/**
 * Free_List - Frees double-linked list.
 * @head: Linked list.
 */
void Free_List(stack_t *head)
{
	stack_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
