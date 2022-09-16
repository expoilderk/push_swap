/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:34:51 by mreis-me          #+#    #+#             */
/*   Updated: 2022/09/15 23:09:08 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		ft_printf("Error\n");
		return (0);
	}
	if (!check_input(argc, argv, 0, 0))
	{
		ft_printf("Error\n");
		return (0);
	}
	populate(argc, argv);
	return (0);
}
