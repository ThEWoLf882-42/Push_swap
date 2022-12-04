/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 16:33:40 by agimi             #+#    #+#             */
/*   Updated: 2022/12/04 19:25:01 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stacks **a)
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
}
