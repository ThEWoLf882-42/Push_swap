/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_them_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:32:55 by agimi             #+#    #+#             */
/*   Updated: 2022/12/17 19:35:55 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_unitsa(t_stacks **a, t_stacks **b, int i, int j)
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

static void	sort_unitsb(t_stacks **a, t_stacks **b, int i, int j)
{
	int	l;

	l = ft_lstsize(*b) + 1;
	while (--l > 0)
	{
		if ((*b)->srank[j] - 48 == i)
			pa(a, b, 1);
		else
			rb(b, 1);
	}
}

void	sort_them_all(t_stacks **a, t_stacks **b)
{
	int	i;
	int	j;

	j = ft_maxint(a, 1);
	while (--j >= 0)
	{
		get_rank(a);
		if (its_ok(a))
			break ;
		i = -1;
		while (++i <= 9)
			sort_unitsa(a, b, i, j);
		i = 10;
		j--;
		if (j > 0)
			while (--i >= 0)
				sort_unitsb(a, b, i, j);
		while (*b)
			pa(a, b, 1);
	}
}
