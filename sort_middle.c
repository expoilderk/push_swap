/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_middle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 09:16:49 by mreis-me          #+#    #+#             */
/*   Updated: 2022/08/24 15:29:34 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_middle(t_stack **stack_a, t_stack **stack_b)
{
//	int push;
	int s_size;
	t_stack *tmp_a;
	t_stack *tmp_b;

	tmp_a = *stack_a;
	tmp_b = *stack_b;
//	push = 0;
	s_size = 5;
	while( s_size > 3 )
	{
		if(tmp_a->index < 3)
		{
			pb(&tmp_a, &tmp_b);
//			push++;
		}
		else
			ra(&tmp_a);
		s_size = get_stack_lenght(tmp_a);
	}
	if (is_ordened(tmp_a) == 1)
	{
		pa(&tmp_b, &tmp_a);
		pa(&tmp_b, &tmp_a);
	}
	else
	{
		sort_little(tmp_a);
		pa(&tmp_b, &tmp_a);
		pa(&tmp_b, &tmp_a);
	}

	if (tmp_a->index > tmp_a->next->index)
		sa(&tmp_a);
}
