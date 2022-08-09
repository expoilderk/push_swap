#include <stdio.h>
#include <stdlib.h>

typedef struct s_stack
{
    int             value;
    struct s_stack  *next;
} t_stack;

int is_empty(t_stack *stack)
{
    if(stack->next == NULL)
        return (1);
    else
        return (0);
}

void init_stack(t_stack *stack)
{
    stack->next = NULL;
}

void clean_stack(t_stack *stack)
{
    t_stack *prox;
    t_stack *current;

    if(!is_empty(stack))
    {
        current = stack->next;
        while (current != NULL)
        {
            prox = current->next;
            free(current);
            current = prox;
        }       
    }
}

void display_stack(t_stack *stack)
{
    t_stack *tmp;

    if (is_empty(stack))
    {
        printf("Stack está vazia\n\n");
        return ;
    }
    tmp = stack->next;

    while (tmp != NULL)
    {
        printf("%d", tmp->value);
        tmp = tmp->next;
    }
    printf("\n\n");
}

void insert_back(t_stack *stack)
{
    t_stack *new;
    t_stack *tmp;
    
    new = (t_stack *)malloc(sizeof(t_stack));
    if (!new)
        exit(1);
    new->next = NULL;

	if (is_empty(stack))
	{
		stack->next = new;
		return ;
	}
    else
    {
        tmp = stack->next;
        while (tmp->next != NULL)
            tmp = tmp->next;
        tmp->next = new;
    }
}

void opcao(t_stack *stack, int op){
	switch(op){
		case 0:
			clean_stack(stack);
			break;
		case 1:
			display_stack(stack);
			break;
		case 2:
			insert_back(stack);
			break;
		case 3:
			init_stack(stack);
			break;
		default:
			printf("Comando inválido\n\n");
	}
}

int menu(){
	int opt;

	printf("Escolha a opção: \n");
	printf("[0] - Sair: \n");
	printf("[1] - Exibir: \n");
	printf("[2] - Adicionar nó: \n");
	printf("[3] - Zerar lista: \n");
	printf("Opção: ");
	scanf("%d", &opt);

	return opt;
}

int main(){
	t_stack *stack = (t_stack *)malloc(sizeof(t_stack));
    int opt;

	if(!stack){
		printf("Sem memória disponível: ");
		exit(1);
	}
	init_stack(stack);

	do{
		opt=menu();
		opcao(stack, opt);
	}while(opt);
	free(stack);
	return 0;
}



