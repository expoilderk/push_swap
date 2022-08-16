#include "push_swap.h"

int main()
{
	t_stack *stack_a;
	int size;

	stack_a = new_element(6);
	add_front(&stack_a, new_element(-5));
	add_front(&stack_a, new_element(3));
	add_front(&stack_a, new_element(-20));
	add_front(&stack_a, new_element(88));
	add_front(&stack_a, new_element(345));
	add_front(&stack_a, new_element(10));
	add_front(&stack_a, new_element(-43));
	add_front(&stack_a, new_element(0));

	size = stack_lenght(stack_a);
	ft_printf("Stack Size %d\n", size);

	stack_index(stack_a, size);
	while(stack_a)
	{
		ft_printf("value -> %d", stack_a->value);
		ft_printf(" - index -> %d\n", stack_a->index);
		stack_a = stack_a->next;
	}

	return 0;
}
