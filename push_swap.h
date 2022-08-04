#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h> 
#include <stdlib.h>

# define BEAD(index_i, index_j) beads[index_i * max + index_j]
# define INIT 0

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	struct s_stack	*prev;
    struct s_stack	*next;
}	t_stack;

// Stack
t_stack *init_stack(t_stack *stack)

// Algoritmo
void gravity_sort(int *arr, int len);

#endif
