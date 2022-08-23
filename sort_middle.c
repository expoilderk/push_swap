/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_middle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 09:16:49 by mreis-me          #+#    #+#             */
/*   Updated: 2022/08/23 17:49:45 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_middle(t_stack **stack_a, t_stack **stack_b, int stack_size)
{
//	int middle = stack_size / 2;
	t_stack *tmp;
	int i = 0;

	tmp = *stack_a;
	while(tmp && i < (stack_size /2))
	{
			//pb(stack_a, stack_b);
			//stack_size--;

		if(tmp->index <= (stack_size /2))
		{
			pb(stack_a, stack_b);
			i++;
		}
		else
		{
			ra(stack_a);
			i++;
		}
		tmp = tmp->next;
	}
	
}
