/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:54:52 by mreis-me          #+#    #+#             */
/*   Updated: 2022/09/06 21:38:15 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    index_sort(t_stack **stack_a, t_stack **stack_b)
{
    int stack_size = get_stack_size(*stack_a);
    t_stack *last;

    // Envia todos os valores para stack B menos os 3 maiores
    while(get_stack_size(*stack_a) > 3)
    {
        if((*stack_a)->index <= stack_size -3)
            pb(stack_a, stack_b);
        else
            ra(stack_a);
    }

    // Realiza a ordenação dos 3 valores que ficaram na Stack A
    sort_three(stack_a);

    /* Verifica o valor do topo e da base da stack B para escolher e colocar
       o valor correspondente no topo da  Stack A. */

    while(get_stack_size(*stack_b) != 0)
    {
        last = get_last(*stack_b);

        if(((*stack_b)->index - (*stack_a)->index) == -1) // Verifica se a relação do topo da stack B - topo da stack A = -1
            pa(stack_b, stack_a);
        else if(((*stack_b)->next->index - (*stack_a)->index) == -1)
        {
            sb(stack_b);
            pa(stack_b, stack_a);
        }
        else if((last->index - (*stack_a)->index) == -1) // Verifica se a relação da base da stack B - topo da stack A = -1
        {
            rrb(stack_b);
            pa(stack_b, stack_a);
        }
        else // Se não for nenhum dos casos rotacionamos a stack B
            rb(stack_b);
    }
}