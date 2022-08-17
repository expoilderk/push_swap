/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 22:27:59 by mreis-me          #+#    #+#             */
/*   Updated: 2022/08/16 22:50:35 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push(t_stack **src, t_stack **dest)
{
    t_stack *temp;

    if (src == NULL)
        return ;
    
    temp = (*src)->next;
    (*src)->next = *dest;
    *dest = *src;
    *src = temp;
}

void    pa(t_stack **stack_b, t_stack **stack_a)
{
    push(stack_b, stack_a);
    ft_printf("pa\n");
}

void    pb(t_stack **stack_a, t_stack **stack_b)
{
    push(stack_a, stack_b);
    ft_printf("pb\n");
}