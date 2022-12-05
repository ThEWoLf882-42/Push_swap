/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inita.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:44:30 by agimi             #+#    #+#             */
/*   Updated: 2022/12/05 13:54:26 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stacks	*inita(t_stacks *a, int argc, char **argv)
{
	int	i;

	i = 0;
	while (++i < argc)
		ft_lstadd_back(&a, ft_lstnew(ft_atoi(argv[i])));
	return (a);
}
