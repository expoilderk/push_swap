/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:52:03 by mreis-me          #+#    #+#             */
/*   Updated: 2022/08/27 20:36:25 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_input(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (argv[i][0] == '-' || argv[i][0] == '+')
		{
			if (!ft_isdigit(argv[i][1]))
				return (1);
		}
		else if (!ft_isdigit(argv[i][0]))
			return (1);
		i++;
	}
	return (0);
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
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	is_rev_ordened(t_stack *stack)
{
	while (stack->next != NULL)
	{
		if (stack->value < stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}
