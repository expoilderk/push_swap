/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:56:34 by mreis-me          #+#    #+#             */
/*   Updated: 2022/08/24 15:16:04 by mreis-me         ###   ########.fr       */
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

void    handler_args(int argc, char *argv[])
{
    int index;
	long int value;
    t_stack *stack_a;
    t_stack *stack_b;

    index = 1;
    stack_b = NULL;
    while (index < argc)
	{
		value = ft_atoi_l(argv[index]);
		if (value < INT_MIN || value > INT_MAX)
			exit_error(&stack_a, "Error", 2);

		if(index == 1)
			stack_a = new_element(value);
		else
			add_back(&stack_a, new_element(value));
		index++;
    }

	if (is_duplicated(stack_a) == 1)
		exit_error(&stack_a, "", 2);

	if (is_ordened(stack_a) == 0)
	{
		get_index(stack_a);
		push_swap(stack_a, stack_b);
	}
	else
		exit_error(&stack_a, "", 1);

//	get_position(stack_a); //não usar aqui
	

	//free nas duas stacks
}
