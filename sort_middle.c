/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_middle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 09:16:49 by mreis-me          #+#    #+#             */
/*   Updated: 2022/08/19 10:29:43 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_middle(t_stack *stack_a, t_stack *stack_b, int stack_size)
{
//	int middle = stack_size / 2;

	while(stack_a->next)
	{
		while(stack_size > 3)
		{
			pb(&stack_a, &stack_b);
			stack_size--;
/*
			if(stack_a->index < middle)
			{
				pb(&stack_a, &stack_b);
				stack_size--;
			}
			else
				ra(&stack_a);*/
		}
		stack_a = stack_a->next;
	}
	
	print_stack(stack_b, "B", 'f');
	print_stack(stack_a, "A", 'f');


//	ft_printf("%d\n", stack_a->index);
//	ft_printf("%d\n", stack_a->next->index);
//	ft_printf("%d\n", stack_a->next->next->index);
//	ft_printf("%d\n", stack_b->index);
//	ft_printf("%d\n", stack_b->next->index);

}
