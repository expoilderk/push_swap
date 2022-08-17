/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:13:46 by mreis-me          #+#    #+#             */
/*   Updated: 2022/08/17 15:09:11 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate(t_stack **stack)
{
	t_stack *head;
	t_stack *penult;
	t_stack *last;

	if ((*stack) == NULL && (*stack)->next == NULL)
		return ;
	
	penult = *stack;
	head = *stack;
	last = *stack;

	while(penult->next->next)
		penult = penult->next;
	while(last->next)
		last = last->next;

	last->next = head;
	penult->next = NULL;
	*stack = last;
}

void	rra(t_stack **stack_a)
{
	rev_rotate(stack_a);
	ft_printf("rra\n");
}

void	rrb(t_stack **stack_b)
{
	rev_rotate(stack_b);
	ft_printf("rrb\n");
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rev_rotate(stack_a);
	rev_rotate(stack_b);
	ft_printf("rrr\n");
}

