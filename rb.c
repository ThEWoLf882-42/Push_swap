/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:42:30 by agimi             #+#    #+#             */
/*   Updated: 2022/12/04 19:25:05 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_stacks **b)
{
	t_stacks	*m;

	if (ft_lstsize(&**b) > 1)
	{
		m = (*b)->next;
		while (m->next)
		{
			m->tnext = m->next;
			m = m->next;
		}
		m->tnext = (*b);
		(*b) = (*b)->next;
		ft_setnext(b);
		ft_cleartnext(b);
	}
}
