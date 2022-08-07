#include "push_swap.h"

t_stack	*stack_last(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

void	add_stack_back(t_stack **stack, t_stack *new)
{
	t_stack	*back;

	if (!stack || !new)
		return ;
	if (*stack == NULL)
	{
		*stack = new;
		return ;
	}
	back = stack_last(*stack);
	new->next = back->next;
	back->next = new;
}