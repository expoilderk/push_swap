#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <limits.h>
#include <stdio.h> 
#include <stdlib.h>
#include "libft/includes/libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
    struct s_stack	*next;
}	t_stack;

// Algoritm
void	sort_little(t_stack *stack);
void	sort_middle(t_stack **stack_a, t_stack **stack_b, int stack_size);


// Commands
void    push(t_stack **src, t_stack **dest);
void    pa(t_stack **stack_b, t_stack **stack_a);
void    pb(t_stack **stack_a, t_stack **stack_b);

void	swap(t_stack **stack);
void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);

void	rotate(t_stack **stack);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);

void	rev_rotate(t_stack **stack);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);



// Stack
t_stack *new_element(int nb);
void	add_front(t_stack **stack, t_stack *new_element);
void	add_back(t_stack **stack, t_stack *new_element);
int		get_stack_lenght(t_stack *stack);
t_stack		*get_last(t_stack *last);


// Check Arguments
int is_ordened(t_stack *stack_a);
int	is_duplicated(t_stack *stack_a);


// Handler Arguments
void    handler_args(int argc, char *argv[]);
//void	populate_stack();


// Algorithm Selection - Push Swap
void    push_swap(t_stack *stack_a, t_stack *stack_b);


// Error Handler
void	msg_error(char *msg, int exit_code, int fd);
void	exit_error(t_stack **stack, char *msg, int fd);
void	free_stack(t_stack **stack);


//Utils
void	print_stack(t_stack *stack, char *name, char type);
void	get_index(t_stack *stack);
void	get_position(t_stack *stack);


#endif
