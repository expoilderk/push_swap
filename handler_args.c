/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:56:34 by mreis-me          #+#    #+#             */
/*   Updated: 2022/08/12 21:33:18 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
- é chamado pela main caso não haja erros iniciais
- Verifica se o input está correto
- Vai inicializar a estrutura das stacks chamando "stack"
- Popular com os argumentos convertidos para inteiros
- Verificar erros iniciais chamando "check_args"
(duplicatas, exceção de tamanho int, tipo errado etc)
- caso haja erros encerra o programa da maneira esperada chamando "handler_error"
- vai verificar se já está ordenada
- Se todos os passos anteriores forem bem-sucedidos vai atribuir um index a cada elemento e 
passar a stack e a informação do seu tamanho para "push_swap"
*/

#include "push_swap.h"

/*
void    populate_stack(char *argv[])
{

    if (argv[i] < INT_MIN || argv[i] > INT_MAX)
        exit_error(stack_a, "Error", 2);
}
*/

void    handler_args(int argc, char *argv[])
{
    int index;
    int stack_size;
    t_stack *stack_a;
    t_stack *stack_b;

    index = argc -1;
    stack_b = NULL;
    int value = ft_atoi(argv[1]);
    stack_a = new_element();
    while (index > 0)
    {

        
    }
    
    

    stack_size = stack_lenght(stack_a); // Pega o tamanho da stack
    push_swap(stack_a, stack_b, stack_size); // Passa stack montada e verificada para push_swap
    //free nas duas stacks
}