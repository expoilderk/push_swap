/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:39:10 by mreis-me          #+#    #+#             */
/*   Updated: 2022/09/06 21:39:07 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack **stack)
{
	if (is_ordened(*stack) == 1)
		return ;
	if ((*stack)->index > (*stack)->next->index)
		if ((*stack)->index > (*stack)->next->next->index)
			ra(stack);
	if ((*stack)->next->index > (*stack)->next->next->index)
		rra(stack);
	if ((*stack)->index > (*stack)->next->index)
		sa(stack);
}
