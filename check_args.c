/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:52:03 by mreis-me          #+#    #+#             */
/*   Updated: 2022/09/07 13:56:35 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_input(int argc, char **argv)
{
	int	i;
	int j;
	char *args;

	i = 1;
	while (i < argc)
	{
		j = 0;
		args = argv[i];
		if (ft_issign(args[j]) && args[j+1] != '\0')
			j++;
		while (args[j] && ft_isdigit(args[j]))
			j++;
		if (args[j] != '\0' && !ft_isdigit(args[j]))
			return (0);
		i++;
	}
	return (1);
}

int	is_duplicated(t_stack *stack_a)
{
	t_stack	*tmp;
	t_stack	*cmp;
	int		flag;

	tmp = stack_a;
	cmp = stack_a;
	while (tmp)
	{
		flag = 0;
		while (cmp)
		{
			if (tmp->value == cmp->value)
				flag++;
			cmp = cmp->next;
		}
		if (flag > 1)
			return (1);
		cmp = stack_a;
		tmp = tmp->next;
	}
	return (0);
}

int	is_ordened(t_stack *stack)
{
	while (stack->next != NULL)
	{
		if ((stack->index - stack->next->index) != -1)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	is_rev_ordened(t_stack *stack)
{
	while (stack->next != NULL)
	{
		if (stack->index - stack->next->index != 1)
			return (0);
		stack = stack->next;
	}
	return (1);
}
