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

static void	push_min_index(t_stack *tmp_a, t_stack *tmp_b)
{
	int	push;

	push = 0;
	while (push < 2)
	{
		if (tmp_a->index < 3)
		{
			pb(&tmp_a, &tmp_b);
			push++;
		}
		else
			ra(&tmp_a);
	}
}

void	sort_five(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp_a;
	t_stack	*tmp_b;

	tmp_a = *stack_a;
	tmp_b = *stack_b;
	push_min_index(tmp_a, tmp_b);
	if (is_ordened(tmp_a) == 1)
	{
		pa(&tmp_b, &tmp_a);
		pa(&tmp_b, &tmp_a);
	}
	else
	{
		sort_three(&tmp_a);
		pa(&tmp_b, &tmp_a);
		pa(&tmp_b, &tmp_a);
	}
	if (tmp_a->index > tmp_a->next->index)
		sa(&tmp_a);
}
