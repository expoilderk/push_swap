/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:33:54 by mreis-me          #+#    #+#             */
/*   Updated: 2022/09/16 11:21:18 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*init_stack(int argc, char **argv)
{
	t_stack	*stack_a;
	char	**args;
	int		index;

	index = 0;
	stack_a = NULL;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		index = 1;
		args = argv;
	}
	while (args[index] != NULL)
	{
		add_back(&stack_a, new_element(ft_atoi(args[index])));
		index++;
	}
	if (argc == 2)
		ft_free(args);
	return (stack_a);
}

t_stack	*new_element(int nb)
{
	t_stack	*new;

	new = malloc(sizeof * new);
	if (!new)
		return (NULL);
	new->value = nb;
	new->index = 0;
	new->next = NULL;
	return (new);
}

void	add_back(t_stack **stack, t_stack *new_element)
{
	t_stack	*back;

	if (!new_element)
		return ;
	if (!*stack)
	{
		*stack = new_element;
		return ;
	}
	back = get_last(*stack);
	back->next = new_element;
}

t_stack	*get_last(t_stack *last)
{
	if (!last)
		return (NULL);
	while (last->next)
		last = last->next;
	return (last);
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
