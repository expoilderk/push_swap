#include "push_swap.h"

void    init_stack(t_stack *stack)
{
    stack->value = 0;
    stack->index = 0;
    stack->pos = 0;
    stack->prev = NULL;
    stack->next = NULL;
}