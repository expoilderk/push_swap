/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 09:16:49 by mreis-me          #+#    #+#             */
/*   Updated: 2022/08/27 21:35:22 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_min_index(t_stack **stack_a, t_stack **stack_b)
{
	int	push;

	push = 0;
	while (push < 2)
	{
		if ((*stack_a)->index < 3)
		{
			pb(stack_a, stack_b);
			push++;
		}
		else
			ra(stack_a);
	}
}

void	sort_five(t_stack **stack_a, t_stack **stack_b)
{
	push_min_index(stack_a, stack_b);
	if (is_ordened(*stack_a) == 1)
	{
		pa(stack_b, stack_a);
		pa(stack_b, stack_a);
	}
	else
	{
		sort_three(stack_a);
		pa(stack_b, stack_a);
		pa(stack_b, stack_a);
	}
	if ((*stack_a)->index > (*stack_a)->next->index)
		sa(stack_a);
}
