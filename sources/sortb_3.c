/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortb_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:31:59 by agimi             #+#    #+#             */
/*   Updated: 2022/12/21 18:12:49 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sortb_3(t_stacks **a, t_stacks **b)
{
	int	i;

	while (ft_lstsize(a) > 3 && !its_ok(a))
	{
	}
}

int	ft_case_rrarrb(t_stacks **a, t_stacks **b, int c)
{
	int	i;

	i = 0;
	if (1)
		;
}

int	b_place(t_stacks **b, int np)
{
	int			i;
	t_stacks	m;

	i = 1;
	if (np > (*b)->content && np < ft_lstlast(*b)->content)
		i = 0;
	else if (np > ft_maxint(b, 2) || np < ft_minint(b))
		i = 0;
}
