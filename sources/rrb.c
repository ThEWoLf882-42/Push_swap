/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:54:35 by agimi             #+#    #+#             */
/*   Updated: 2022/12/12 15:42:12 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_stacks **b, int i)
{
	t_stacks	*m;

	if (ft_lstsize(&**b) > 1)
	{
		ft_setrr(b);
		m = ft_lstlast(&**b);
		m->tnext = (*b);
		(*b) = m;
		ft_setnext(b);
		ft_cleartnext(b);
	}
	if (i == 1)
		write(1, "rrb\n", 4);
}
