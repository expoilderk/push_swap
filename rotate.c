/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:02:50 by mreis-me          #+#    #+#             */
/*   Updated: 2022/08/17 14:43:43 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack *head;
//	t_stack *node;
	t_stack *last;

	if ((*stack) == NULL && (*stack)->next == NULL)
		return ;
	
//	node = *stack;
	last = *stack;
	head = (*stack)->next;
	while(last->next)
		last = last->next;
	(*stack)->next = last->next;
	last->next = *stack;
	*stack = head;
}

void	ra(t_stack **stack_a)
{
	rotate(stack_a);
	ft_printf("ra\n");
}

void	rb(t_stack **stack_b)
{
	rotate(stack_b);
	ft_printf("rb\n");
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_printf("rr\n");
}
