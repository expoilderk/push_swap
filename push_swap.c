/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:37:08 by mreis-me          #+#    #+#             */
/*   Updated: 2022/08/17 11:49:20 by mreis-me         ###   ########.fr       */
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
	(void)stack_b;

	stack_size = get_stack_lenght(stack_a);
    if (stack_size == 2)
    {
		print_stack(stack_a, "A", 'f');
	//	print_stack(stack_b, "B", 'f');
        sa(stack_a);
		print_stack(stack_a, "A", 'f');
	//	print_stack(stack_b, "B", 'f');
	}
}
