/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:42:30 by agimi             #+#    #+#             */
/*   Updated: 2022/12/09 17:11:46 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_stacks **b, int i)
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
	if (i == 1)
		write(1, "rb", 2);
}
