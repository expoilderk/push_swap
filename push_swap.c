/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:37:08 by mreis-me          #+#    #+#             */
/*   Updated: 2022/09/15 23:25:40 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	populate(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b;

	stack_b = NULL;
	stack_a = init_stack(argc, argv);
	if (is_duplicated(stack_a))
		exit_error(&stack_a, "Error", 2);
	else
		get_index(stack_a, get_stack_size(stack_a) + 1);
	if (!is_ordened(stack_a))
		push_swap(&stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
}

void	push_swap(t_stack **stack_a, t_stack **stack_b)
{
	int		stack_size;

	stack_size = get_stack_size(*stack_a);
	if (stack_size == 2)
		sa(stack_a);
	else if (stack_size == 3)
		sort_three(stack_a);
	else if (stack_size == 4)
		sort_four(stack_a, stack_b);
	else if (stack_size == 5)
		sort_five(stack_a, stack_b);
	else if (stack_size > 5)
		radix(stack_a, stack_b);
}

void	get_index(t_stack *stack, int stack_size)
{
	t_stack	*temp;
	t_stack	*max;
	int		value;

	while (--stack_size > 0)
	{
		temp = stack;
		max = NULL;
		value = INT_MIN;
		while (temp)
		{
			if (temp->value == INT_MIN && temp->index == 0)
				temp->index = 1;
			if (temp->value > value && temp->index == 0)
			{
				value = temp->value;
				max = temp;
				temp = stack;
			}
			else
				temp = temp->next;
		}
		if (max != NULL)
			max->index = stack_size;
	}
}
