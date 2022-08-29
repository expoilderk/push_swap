/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 22:26:32 by mreis-me          #+#    #+#             */
/*   Updated: 2022/08/29 17:28:27 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_bits(t_stack *stack)
{
	t_stack	*tmp;
	int		max_index;
	int		max_bits;

	max_index = 0;
	max_bits = 0;
	tmp = stack;
	while (tmp != NULL)
	{
		if (tmp->index > max_index)
			max_index = tmp->index;
		tmp = tmp->next;
	}
	while ((max_index >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

static void	step_one(t_stack **stack_a, t_stack **stack_b, int bit)
{
	int		counter;
	int		stack_size;
	t_stack	*tmp;

	counter = 0;
	tmp = *stack_a;
	stack_size = get_stack_size(*stack_a);
	while (counter < stack_size)
	{
		tmp = *stack_a;
		if (is_ordened(tmp) == 1)
			break ;
		if (((tmp -> index >> bit) & 1) == 0)
			pb(stack_a, stack_b);
		else
			ra(stack_a);
		counter++;
	}
}

static void	step_two(t_stack **stack_a, t_stack **stack_b, int bit)
{
	int		counter;
	int		stack_size;
	t_stack	*tmp;

	counter = 0;
	tmp = *stack_b;
	stack_size = get_stack_size(*stack_b);
	while (counter < stack_size)
	{
		tmp = *stack_b;
		if (((tmp->index >> bit) & (1 << 1)) == 0)
			rb(stack_b);
		else
			pa(stack_b, stack_a);
		counter++;
	}
}

void	radix(t_stack **stack_a, t_stack **stack_b)
{
	int		bit;
	int		max_bits;

	bit = 0;
	max_bits = get_bits(*stack_a);
	while (bit < max_bits)
	{
		step_one(stack_a, stack_b, bit);

		step_two(stack_a, stack_b, bit);

		bit++;
	}
	while (get_stack_size(*stack_b) != 0)
		pa(stack_b, stack_a);
}
