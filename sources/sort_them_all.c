/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_them_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:32:55 by agimi             #+#    #+#             */
/*   Updated: 2022/12/13 18:50:03 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_units(t_stacks **a, t_stacks **b, int i, int j)
{
	int	l;

	l = ft_lstsize(*a) + 1;
	while (--l > 0)
	{
		if ((*a)->srank[j] - 48 == i)
			pb(a, b, 1);
		else
			ra(a, 1);
	}
}

void	sort_them_all(t_stacks **a, t_stacks **b)
{
	int	i;
	int	j;

	j = ft_maxint(a);
	while (--j >= 0)
	{
		i = -1;
		while (++i <= 9)
			sort_units(a, b, i, j);
		while ((*b))
			pa(a, b, 1);
		get_rank(a);
	}
}

