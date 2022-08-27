/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 22:26:32 by mreis-me          #+#    #+#             */
/*   Updated: 2022/08/27 15:11:22 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int get_bits(t_stack *stack)
{
    t_stack *tmp;
    int max_index;
    int max_bits;

    max_index = 0;
    max_bits = 0;
    tmp = stack;
    while(tmp != NULL)
    {
        if(tmp->index > max_index)
            max_index = tmp->index;
        tmp = tmp->next;
    }
    while ((max_index >> max_bits) != 0)
        max_bits++;
    return (max_bits);
}

void    radix(t_stack **stack_a, t_stack **stack_b)
{
    int i;
    int j;
    int bits;
    int size;
    //int size_b;
    t_stack *tmp;
    //t_stack *tmp_b;

    i = 0;
    tmp = *stack_a;
    size = get_stack_size(*stack_a);
    bits = get_bits(*stack_a);
    while (i < bits)
    {
        j = 0;
        while (j < size)
        {
            tmp = *stack_a;
            if (((tmp->index >> i) & 1) == 0)
                pb(stack_a, stack_b);
            else
                ra(stack_a);
            j++;
        }
        
        /*j = 0;
        size_b = get_stack_size(*stack_b);
        while (j < size_b)
        {
            tmp_b = *stack_b;
            if (((tmp_b->index >> i) & 2) == 0)
                rb(stack_b);
            else
                pa(stack_b, stack_a);
            j++;
        }*/
        
        while(get_stack_size(*stack_b) != 0)
            pa(stack_b, stack_a);
        i++;
    }       
}