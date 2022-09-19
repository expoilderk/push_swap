/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:52:03 by mreis-me          #+#    #+#             */
/*   Updated: 2022/09/19 09:40:53 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_check(int argc, char **args, int i, int j)
{
	long int	value;
	int			check;

	check = 0;
	while (args[i])
	{
		j = 0;
		value = ft_atoi_l(args[i]);
		if (value < INT_MIN || value > INT_MAX)
			check = 1;
		if (ft_issign(args[i][j]) && args[i][j +1] != '\0')
			j++;
		while (args[i][j] && ft_isdigit(args[i][j]))
			j++;
		if (args[i][j] != '\0' && !ft_isdigit(args[i][j]))
			check = 1;
		i++;
	}
	if (argc == 2)
		ft_free(args);
	if (check == 1)
		return (0);
	return (1);
}

int	check_input(int argc, char **argv)
{
	char		**args;
	int			check;
	int			i;
	int			j;

	i = 0;
	j = 0;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv;
	}
	check = get_check(argc, args, i, j);
	if (check == 0)
		return (0);
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
