/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:37:08 by mreis-me          #+#    #+#             */
/*   Updated: 2022/08/16 22:53:43 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
- é chamado pela handler_args
- recebe a stack montada e as informações necessárias
- Escolher qual caminho de solução seguir baseado no numero de elementos a serem ordenados na stack
*/

#include "push_swap.h"

void    push_swap(t_stack *stack_a, t_stack *stack_b, int stack_size)
{   

    
    //ft_printf("%d", stack_size);

    if (stack_size > 1)
    {
        pb(&stack_a, &stack_b);
        //ft_putendl_fd("sa", 1); // Caso não esteja ordenado apenas imprimir sa
    }

    
    while(stack_a)
	{
		ft_printf("value -> %d", stack_a->value);
		ft_printf(" - index -> %d\n", stack_a->index);
		stack_a = stack_a->next;
	}
    ft_printf("stack a\n\n");
    
    while(stack_b)
	{
		ft_printf("value -> %d", stack_b->value);
		ft_printf(" - index -> %d\n", stack_b->index);
		stack_b = stack_b->next;
	}
    ft_printf("stack b");
}