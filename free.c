#include "monty.h"

/**
 * freeAll -It frees the line buffer, the stack,
 *  and the memory file if it's open
 */
void freeAll(void)
{

	free(gv.line);
	freeLinkedList(gv.stack);
	if (gv.mfile)
		fclose(gv.mfile);
}

/**
 * freeLinkedList - starting at the given node,
 *  by freeing each node and moving to the next node.
 * @stack: - A pointer to the top of the stack.
 */

void freeLinkedList(stack_t *stack)
{
	stack_t *nextNode;

	while (stack)
	{
		nextNode = stack->next;
		free(stack);
		stack = nextNode;
	}
}
