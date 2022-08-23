/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:52:03 by mreis-me          #+#    #+#             */
/*   Updated: 2022/08/23 18:31:30 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_ordened(t_stack *stack_a)
{
    while(stack_a->next != NULL)
    {
        if (stack_a->value > stack_a->next->value)
            return (0);
        stack_a = stack_a->next;
    }
    return (1);
}

/*
int check_input(char *argv[])
{

    return (1)
}*/

int	is_duplicated(t_stack *stack_a)
{
	t_stack *tmp;
	t_stack *cmp;
	int flag;

	tmp = stack_a;
	cmp = stack_a;
	while(tmp)
	{
		flag = 0;
		while(cmp)
		{
			if(tmp->value == cmp->value)
				flag++;
			cmp = cmp->next;
		}
		if (flag > 1)
			return (1);
		cmp = stack_a;
		tmp = tmp->next;
	}
	return 0;
}
