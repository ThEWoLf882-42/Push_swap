/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_them_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:44:39 by agimi             #+#    #+#             */
/*   Updated: 2022/12/24 12:06:09 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_a(t_stacks **a, t_stacks **b)
{
	int			i;
	t_stacks	*m;

	while ((*b))
	{
		m = (*b);
		i = rotate_type_ba(a, b);
		while (i >= 0)
		{
			if (i == case_rarb_a(a, b, m->content))
				i = apply_rarb(a, b, m->content, 'b');
			else if (i == case_rarrb_a(a, b, m->content))
				i = apply_rarrb(a, b, m->content, 'b');
			else if (i == case_rrarrb_a(a, b, m->content))
				i = apply_rrarrb(a, b, m->content, 'b');
			else if (i == case_rrarb_a(a, b, m->content))
				i = apply_rrarb(a, b, m->content, 'b');
			else
				m = m->next;
		}
	}
}

void	sort_b(t_stacks **a, t_stacks **b)
{
	if (ft_lstsize(*a) > 3 && !its_ok(a))
		pb(a, b, 1);
	if (ft_lstsize(*a) > 3 && !its_ok(a))
		pb(a, b, 1);
	if (ft_lstsize(*a) > 3 && !its_ok(a))
		sortb_3(a, b);
	if (!its_ok(a))
		sort3a(a);
}

void	sort_them_all(t_stacks **a, t_stacks **b)
{
	int	i;

	// get_pos(a);
	// get_rank(a);
	sort_b(a, b);
	sort_a(a, b);
	i = rpos(a, ft_minint(a));
	if (i < ft_lstsize(*a) - i)
	{
		while ((*a)->content != ft_minint(a))
			ra(a, 1);
	}
	else
	{
		while ((*a)->content != ft_minint(a))
			rra(a, 1);
	}
}
