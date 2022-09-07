/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:33:54 by mreis-me          #+#    #+#             */
/*   Updated: 2022/09/07 13:59:58 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*get_last(t_stack *last)
{
	if (!last)
		return (NULL);
	while (last->next)
		last = last->next;
	return (last);
}

t_stack	*new_element(int nb)
{
	t_stack	*new;

	new = malloc(sizeof * new);
	if (!new)
		return (NULL);
	new->value = nb;
	new->index = 0;
	new->pos = 0;
	new->next = NULL;
	return (new);
}

void	add_back(t_stack **stack, t_stack *new_element)
{
	t_stack	*back;

	if (!stack || !new_element)
		return ;
	if (*stack == NULL)
	{
		*stack = new_element;
		return ;
	}
	back = get_last(*stack);
	new_element->next = back->next;
	back->next = new_element;
}

int	get_stack_size(t_stack *stack)
{
	int		size;
	t_stack	*temp;

	size = 0;
	temp = stack;
	while (temp)
	{
		temp = temp->next;
		size++;
	}
	return (size);
}
