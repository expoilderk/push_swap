/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:33:54 by mreis-me          #+#    #+#             */
/*   Updated: 2022/08/12 20:44:56 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *new_element(int nb)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		msg_error("", EXIT_FAILUIRE, 2);
	new->value = nb;
    stack->index = 0;
    stack->pos = 0;
//    stack->prev = NULL;
    stack->next = NULL;
	return (new);
}

void	add_tail(t_stack **stack, t_stack *new_element)
{
	t_stack	*tail;

	if (!stack || !new_element)
		msg_error("", EXIT_FAILUIRE, 2);
	if (*stack == NULL)
	{
		*stack = new_element;
		return ;
	}
	tail = get_last(*stack);
	new_element->next = tail->next;
	tail->next = new_element;
}

t_stack	*get_last(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

int	stack_lenght(t_stack *stack)
{
	int	size;

	size = 0;
	while (stack)
	{
		stack = stack->next;
		size++;
	}
	return (size);
}

/*
void    stack_index()
{

}
*/