/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 19:24:34 by agimi             #+#    #+#             */
/*   Updated: 2022/12/04 19:14:11 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_stacks **b)
{
	t_stacks	*m;

	if (ft_lstsize(&**b) > 1)
	{
		m = (*b)->next;
		(*b)->tnext = (*b)->next->next;
		(*b)->next->tnext = (*b);
		(*b) = m;
		ft_settnext(b);
		ft_setnext(b);
		ft_cleartnext(b);
	}
}