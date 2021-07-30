#include "push_swap.h"
#include <stdlib.h>

t_stack *init_stack()
{
	t_stack *stack;
	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		print_error();
	stack->size = 0;
	stack->top = NULL;
	stack->tail = NULL;
	return (stack);
}

t_node *init_node(int data)
{
	t_node *node;

	node = (t_node *)malloc(sizeof(t_node));
	if (!node)
		print_error();
	node->data = data;
	node->prev = NULL;
	node->next = NULL;
	return (node);
}
