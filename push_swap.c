/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:37:08 by mreis-me          #+#    #+#             */
/*   Updated: 2022/08/27 14:40:05 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
- é chamado pela handler_args
- recebe a stack montada e as informações necessárias
- Escolher qual caminho de solução seguir baseado no numero de elementos a serem ordenados na stack
*/

#include "push_swap.h"

void    push_swap(t_stack *stack_a, t_stack *stack_b)
{
	int stack_size;
	t_stack *tmp_a;
	t_stack *tmp_b;

	tmp_a = stack_a;
	tmp_b = stack_b;
	stack_size = get_stack_size(stack_a);
    if (stack_size == 2)
		sa(&tmp_a);
	else if(stack_size == 3)
		sort_three(&tmp_a);
	else if(stack_size == 4)
		sort_four(&tmp_a, &tmp_b);
	else if(stack_size == 5)
		sort_five(&tmp_a, &tmp_b);
	else if(stack_size > 5)
		radix(&tmp_a, &tmp_b);
}
