/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:37:08 by mreis-me          #+#    #+#             */
/*   Updated: 2022/08/23 17:47:38 by mreis-me         ###   ########.fr       */
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

	stack_size = get_stack_lenght(stack_a);
    if (stack_size == 2)
		sa(&stack_a);
	else if(stack_size == 3)
		sort_little(stack_a);
	else if(stack_size > 3)
	{
		sort_middle(&stack_a, &stack_b, stack_size);
		print_stack(stack_a, "A", 'f');
		print_stack(stack_b, "B", 'f');
		ft_printf("sorted 4 or 5 numbers\n");
	}
/*	else if(stack_size > 5)
		ft_printf("sorted more 5 numbers\n");*/
}
