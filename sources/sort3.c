/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:19:13 by agimi             #+#    #+#             */
/*   Updated: 2022/12/19 17:26:00 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort3a(t_stacks **a)
{
	get_rank(a);
	while ((*a))
	{
		if (its_ok(a))
			break ;
		if ((*a)->rank == 3)
			ra(a, 1);
		else if (ft_lstlast((*a))->rank == 1)
			rra(a, 1);
		else if ((*a)->rank == 2)
			sa(a, 1);
		else if (ft_lstlast((*a))->rank == 2)
		{
			ra(a, 1);
			sa(a, 1);
		}
	}
}

void	sort3b(t_stacks **b)
{
	get_rank(b);
	while ((*b))
	{
		if (its_ok(b))
			break ;
		if ((*b)->rank == 3)
			rb(b, 1);
		else if ((*b)->rank == 2)
			sb(b, 1);
		else if (ft_lstlast((*b))->rank == 1)
			rrb(b, 1);
		else if (ft_lstlast((*b))->rank == 2)
		{
			rb(b, 1);
			sb(b, 1);
		}
	}
}
