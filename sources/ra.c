/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 16:33:40 by agimi             #+#    #+#             */
/*   Updated: 2022/12/09 17:21:58 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stacks **a, int i)
{
	t_stacks	*m;

	if (ft_lstsize(&**a) > 1)
	{
		m = (*a)->next;
		while (m->next)
		{
			m->tnext = m->next;
			m = m->next;
		}
		m->tnext = (*a);
		(*a) = (*a)->next;
		ft_setnext(a);
		ft_cleartnext(a);
	}
	if (i == 1)
		write(1, "ra\n", 3);
}
