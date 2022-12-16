/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_them_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:32:55 by agimi             #+#    #+#             */
/*   Updated: 2022/12/15 16:52:51 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_units(t_stacks **a, t_stacks **b, int i, int j)
{
	int	l;
	int	r;

	l = ft_lstsize(*a) + 1;
	r = ft_maxint(a, 2);
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

	j = ft_maxint(a, 1);
	while (--j >= 0)
	{
		if (its_ok(a))
			break ;
		i = -1;
		while (++i <= 9)
			sort_units(a, b, i, j);
		while ((*b))
			pa(a, b, 1);
		get_rank(a);
	}
	get_binary(a);
}
