/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   populate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:56:34 by mreis-me          #+#    #+#             */
/*   Updated: 2022/09/15 00:27:37 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	populate(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	long int	value;
	int			index;

	index = 1;
	stack_b = NULL;
	while (index < argc)
	{
		value = ft_atoi_l(argv[index]);
		if (value < INT_MIN || value > INT_MAX)
			exit_error(&stack_a, "Error", 2);
		if (index == 1)
			stack_a = new_element((int)value);
		else
			add_back(&stack_a, new_element((int)value));
		index++;
	}
	if (is_duplicated(stack_a) == 1)
		exit_error(&stack_a, "Error", 2);
	else
		get_index(stack_a, get_stack_size(stack_a) +1);
	if (is_ordened(stack_a) == 0)
		push_swap(&stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
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