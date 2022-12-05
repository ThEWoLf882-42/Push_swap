/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inita.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:44:30 by agimi             #+#    #+#             */
/*   Updated: 2022/12/05 17:20:23 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stacks	*inita(t_stacks *a, int argc, char **argv)
{
	int	i;

	i = 0;
	while (++i < argc)
	{
		if (!(ft_digit(argv[i])))
		{
			write(1, "Error\n", 6);
			return (NULL);
		}
		else
			ft_lstadd_back(&a, ft_lstnew(ft_atoi(argv[i])));
	}
	return (a);
}
