/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 10:00:33 by mreis-me          #+#    #+#             */
/*   Updated: 2022/09/12 11:29:15 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_index(t_stack *stack, int stack_size)
{
	t_stack	*temp;
	t_stack	*max;
	int		value;

	while (--stack_size > 0)
	{
		temp = stack;
		max = NULL;
		value = INT_MIN;
		while (temp)
		{
			if (temp->value == INT_MIN && temp->index == 0)
				temp->index = 1;
			if (temp->value > value && temp->index == 0)
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

void	print_stack(t_stack **stack, char *name)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp)
	{
		ft_printf("v -> %d | i -> %d\n", tmp->value, tmp->index);
		tmp = tmp->next;
	}
	ft_printf("----------\n");
	ft_printf("    %s   \n\n", name);
}
