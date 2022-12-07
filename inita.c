/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inita.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:44:30 by agimi             #+#    #+#             */
/*   Updated: 2022/12/07 14:08:20 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stacks	*inita(t_stacks *a, int argc, char **argv)
{
	int	i;

	i = 0;
	while (++i < argc)
	{
		if ((!(ft_digit(argv[i])) || ft_onlyone(argc, argv))
			|| ((ft_atoi(argv[i]) == 0) && ft_strcmp(argv[i], "0")))
		{
			write(1, "Error\n", 6);
			return (NULL);
		}
		else
			ft_lstadd_back(&a, ft_lstnew(ft_atoi(argv[i])));
	}
	return (a);
}
