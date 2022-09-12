/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   populate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:56:34 by mreis-me          #+#    #+#             */
/*   Updated: 2022/09/12 15:24:57 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *pop(int argc, char **argv)
{
	long int	value;
	int			index;
	t_stack *stack_a;

	index = 1;
	stack_a = NULL;
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
	return (stack_a);
}

void	populate(int argc, char *argv[])
{
	t_stack		*stack_a;
	t_stack		*stack_b;

	stack_b = NULL;
	stack_a = pop(argc, argv);
	if (is_duplicated(stack_a) == 1)
		exit_error(&stack_a, "Error", 2);
	else
		get_index(stack_a, get_stack_size(stack_a) +1);
	if (is_ordened(stack_a) == 0)
		push_swap(stack_a, stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
}
