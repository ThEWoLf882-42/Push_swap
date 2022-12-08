/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:10:46 by agimi             #+#    #+#             */
/*   Updated: 2022/12/08 20:11:36 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_stacks **a, t_stacks **b)
{
	int			i;

	while (ft_lstsize(*a) > 1)
	{
		i = -1;
		while (++i < ft_lstsize(*a))
		{
			if ((*a)->content < ft_lstlast((*a))->content)
				ra(a);
			if ((*a)->content > ft_lstlast((*a))->content)
				pb(a, b);
		}
	}
	while (ft_lstsize(*b) > 1)
	{
		i = -1;
		while (++i < ft_lstsize(*b))
		{
			if ((*b)->content < ft_lstlast((*b))->content)
				rb(b);
			if ((*b)->content > ft_lstlast((*b))->content)
				pa(a, b);
		}
	}
	rra(a);
	pb(a, b);
	while (ft_lstsize(*a) > 1)
	{
		i = -1;
		while (++i < ft_lstsize(*a))
		{
			if ((*a)->content < ft_lstlast((*a))->content)
				ra(a);
			if ((*a)->content > ft_lstlast((*a))->content)
				pb(a, b);
		}
	}
	pb(a, b);
	rb(b);
	while (ft_lstsize(*b) > 1)
	{
		i = -1;
		while (++i < ft_lstsize(*b))
		{
			if ((*b)->content < ft_lstlast((*b))->content)
				rb(b);
			if ((*b)->content > ft_lstlast((*b))->content)
				pa(a, b);
		}
	}
}
