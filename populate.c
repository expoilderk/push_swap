/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   populate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:56:34 by mreis-me          #+#    #+#             */
/*   Updated: 2022/08/27 21:55:29 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	populate(int argc, char *argv[])
{
	int			index;
	long int	value;
	t_stack		*stack_a;
	t_stack		*stack_b;

	index = 1;
	stack_b = NULL;
	while (index < argc)
	{
		value = ft_atoi_l(argv[index]);
		if (value < INT_MIN || value > INT_MAX)
			exit_error(&stack_a, "Error", 2);
		if (index == 1)
			stack_a = new_element(value);
		else
			add_back(&stack_a, new_element(value));
		index++;
	}
	if (is_duplicated(stack_a) == 1)
		exit_error(&stack_a, "", 2);
	if (is_ordened(stack_a) == 0)
		push_swap(stack_a, stack_b);
	else
		exit_error(&stack_a, "", 1);
}
