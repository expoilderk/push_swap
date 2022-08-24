/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_little.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:39:10 by mreis-me          #+#    #+#             */
/*   Updated: 2022/08/24 14:58:25 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_little(t_stack *stack)
{
	t_stack *tmp;

	tmp = stack;
	if(tmp->index > tmp->next->index)
		if(tmp->index > tmp->next->next->index)
			ra(&tmp);
	if(tmp->next->index > tmp->next->next->index)
		rra(&tmp);
	if(tmp->index > tmp->next->index)
		sa(&tmp);
}
