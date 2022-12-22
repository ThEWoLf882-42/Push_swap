/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:31:59 by agimi             #+#    #+#             */
/*   Updated: 2022/12/22 19:38:49 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sortb_3(t_stacks **a, t_stacks **b)
{
	int			i;
	t_stacks	*m;

	while (ft_lstsize(*a) > 3 && !its_ok(a))
	{
		m = (*a);
		i = rotate_type_ab(a, b);
		while (i >= 0)
		{
			if (i == case_rarb(a, b, m->content))
				i = apply_rarb(a, b, m->content, 'a');
			else if (i == case_rrarrb(a, b, m->content))
				i = apply_rrarrb(a, b, m->content, 'a');
			else if (i == case_rarrb(a, b, m->content))
				i = apply_rarrb(a, b, m->content, 'a');
			else if (i == case_rrarb(a, b, m->content))
				i = apply_rrarb(a, b, m->content, 'a');
			else
			m = m->next;
		}
	}
}

int	a_place(t_stacks **a, int nb)
{
	int			i;
	t_stacks	*m;

	i = 1;
	if (nb > (*a)->content && nb < ft_lstlast(*a)->content)
		i = 0;
	else if (nb > ft_maxint(a, 2) || nb < ft_minint(a))
		i = rpos(a, ft_maxint(a, 2));
	else
	{
		m = (*a);
		while (m->content < nb || m->next->content > nb)
		{
			m = m->next;
			i++;
		}
	}
	return (i);
}

int	b_place(t_stacks **b, int nb)
{
	int			i;
	t_stacks	*m;

	i = 1;
	if (nb > (*b)->content && nb < ft_lstlast(*b)->content)
		i = 0;
	else if (nb > ft_maxint(b, 2) || nb < ft_minint(b))
		i = rpos(b, ft_maxint(b, 2));
	else
	{
		m = (*b);
		while (m->content < nb || m->next->content > nb)
		{
			m = m->next;
			i++;
		}
	}
	return (i);
}
