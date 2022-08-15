/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:33:54 by mreis-me          #+#    #+#             */
/*   Updated: 2022/08/15 16:55:41 by mreis-me         ###   ########.fr       */
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

void	add_tail(t_stack **stack, t_stack *new_element) //Talvez não precise usar
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

void	add_front(t_stack **stack, t_stack *new_element)
{
	if (!stack || !new)
		return ;
	new->next = *stack;
	*stack = new;
}

t_stack	*get_penult(t_stack *stack) //verificar se funciona para pegar o penultimo elemento
{
	t_stack *penult;

	if (!stack)
		return (NULL);
	penult = stack;
	while (penult->next->next)
		penult = penult->next->next;
	return (penult);
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


void    stack_index(t_stack *stack, int stack_size)
{
	t_stack	*temp;
	t_stack	*max;
	int		value;

	temp = stack;
	max = NULL;
	value = INT_MIN;
	while (--stack_size > 0)
	{
		while (temp)
		{
			if(temp->value == INT_MIN && temp->index == 0)
				temp->index = 1;
			if(temp->value > value && temp->index == 0)
			{
				value = temp->value;
				max = temp;
				temp = stack;
			}
			else
				temp = temp->next;
		}
		if (max != NULL)
			max->index = stack_size;
	}
}

