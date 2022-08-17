#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <limits.h>
#include <stdio.h> 
#include <stdlib.h>
#include "libft/includes/libft.h"

# define BEAD(index_i, index_j) beads[index_i * max + index_j]
# define INIT 0

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
//	struct s_stack	*prev;
    struct s_stack	*next;
}	t_stack;

// Algoritm
void gravity_sort(int *arr, int len);


// Commands
void    push(t_stack **src, t_stack **dest);
void    pa(t_stack **stack_b, t_stack **stack_a);
void    pb(t_stack **stack_a, t_stack **stack_b);


// Stack
t_stack *new_element(int nb);
void	add_front(t_stack **stack, t_stack *new_element);
void	add_tail(t_stack **stack, t_stack *new_element);
t_stack	*get_penult(t_stack *stack);
int		stack_size(t_stack *stack);
void	stack_index(t_stack *stack, int stack_size);

// Check Arguments
int is_ordened(t_stack *stack_a);


// Handler Arguments
void    handler_args(int argc, char *argv[]);
//void	populate_stack();

// Algorithm Selection - Push Swap
void    push_swap(t_stack *stack_a, t_stack *stack_b, int stack_lenght);


// Error Handler
void	msg_error(char *msg, int exit_code, int fd);
void	exit_error(t_stack **stack, char *msg, int fd);
void	free_stack(t_stack **stack);


#endif
