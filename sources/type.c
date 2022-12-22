/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:08:57 by agimi             #+#    #+#             */
/*   Updated: 2022/12/22 19:33:54 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate_type_ba(t_stacks **a, t_stacks **b)
{
	int			i;
	t_stacks	*m;

	m = (*b);
	i = case_rrarrb_a(a, b, (*b)->content);
	while (m)
	{
		if (i > case_rarb_a(a, b, m->content))
			i = case_rarb_a(a, b, m->content);
		if (i > case_rrarrb_a(a, b, m->content))
			i = case_rrarrb_a(a, b, m->content);
		if (i > case_rarrb_a(a, b, m->content))
			i = case_rarrb_a(a, b, m->content);
		if (i > case_rrarb_a(a, b, m->content))
			i = case_rrarb_a(a, b, m->content);
		m = m->next;
	}
	return (i);
}

int	rotate_type_ab(t_stacks **a, t_stacks **b)
{
	int			i;
	t_stacks	*m;

	m = (*a);
	i = case_rrarrb(a, b, (*a)->content);
	while (m)
	{
		if (i > case_rarb(a, b, m->content))
			i = case_rarb(a, b, m->content);
		if (i > case_rrarrb(a, b, m->content))
			i = case_rrarrb(a, b, m->content);
		if (i > case_rarrb(a, b, m->content))
			i = case_rarrb(a, b, m->content);
		if (i > case_rrarb(a, b, m->content))
			i = case_rrarb(a, b, m->content);
		m = m->next;
	}
	return (i);
}
