/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:28:23 by mreis-me          #+#    #+#             */
/*   Updated: 2022/08/12 13:03:54 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	msg_error(char *msg, int exit_code, int fd)
{
	ft_putendl_fd(msg, fd);
	exit(exit_code);
}

void	exit_error(t_stack **stack, char *msg, int fd)
{
	ft_putendl_fd(msg, fd);
    free_stack(stack);
	exit(EXIT_FAILURE);
}

void	free_stack(t_stack **stack)
{
	t_stack *temp;

    while(*stack)
    {
        temp = (*stack)->next;
        free(*stack);
        *stack = temp;
    }
    *stack = NULL;
}