/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:10:46 by agimi             #+#    #+#             */
/*   Updated: 2022/12/09 17:00:45 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rank(t_stacks *s)
{
	t_stacks	*m;
	t_stacks	*t;

	m = s;
	t = s;
	while (s)
	{
		while (t)
		{
			if (s->content < t->content)
				s->rank -= 1;
			t = t->next;
		}
		t = m;
		s = s->next;
	}
}

void	sort(t_stacks **a, t_stacks **b)
{
	int			i;

	i = 1;
	rank(*a);
	while ((*a))
	{
		if ((*a)->rank == i)
		{
			pb(a, b);
			i++;
		}
		ra(a);
	}
	while ((*b))
		pa(a, b);
}
