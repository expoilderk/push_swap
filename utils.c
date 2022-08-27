/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 10:00:33 by mreis-me          #+#    #+#             */
/*   Updated: 2022/08/27 14:27:02 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void   get_index(t_stack *stack)
{
	t_stack	*temp;
	t_stack	*max;
	int		value;
	int		stack_size;

	stack_size = get_stack_size(stack) +1;
	while (--stack_size > 0)
	{
		temp = stack;
		max = NULL;
		value = INT_MIN;
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

void	get_position(t_stack *stack)
{
	int	index;
	t_stack *temp;

	index = 1;
	temp = stack;
	while (temp)
	{
		temp->pos = index;
		temp = temp->next;
		index++;
	}
}

void	print_s(t_stack **stack, char *name)
{
	t_stack *tmp;

	tmp = *stack;
	while(tmp)
	{
		ft_printf("v -> %d\n", tmp->value);
		tmp = tmp->next;
	}
	ft_printf("----------\n");
	ft_printf("    %s   \n\n", name);
}

void	print_stack(t_stack *stack, char *name, char type)
{
	t_stack *temp;

	temp = stack;

	if(type == 'v')
	{
		while(temp)
		{
			ft_printf("value -> %d\n", temp->value);
			temp = temp->next;
		}
		ft_printf("----------\n");
		ft_printf("    %s   \n\n", name);
	}
	else if(type == 'i')
	{
		while(temp)
		{
			ft_printf("index -> %d\n", temp->index);
			temp = temp->next;
		}
		ft_printf("----------\n");
		ft_printf("    %s   \n\n", name);
	}
	else if(type == 'p')
	{
		while(temp)
		{
			ft_printf("position -> %d\n", temp->pos);
			temp = temp->next;
		}
		ft_printf("----------\n");
		ft_printf("    %s   \n\n", name);
	}
	else if(type == 'f')
	{
		while(temp)
		{
			ft_printf("value -> %d - index -> %d - pos -> %d\n", temp->value, temp->index, temp->pos);
			temp = temp->next;
		}
		ft_printf("----------\n");
		ft_printf("    %s   \n\n", name);
	}
}
