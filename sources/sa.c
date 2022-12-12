/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:37:02 by agimi             #+#    #+#             */
/*   Updated: 2022/12/11 14:14:29 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stacks **a, int i)
{
	t_stacks	*m;

	if (ft_lstsize(*a) > 0)
	{
		m = (*a)->next;
		(*a)->tnext = (*a)->next->next;
		(*a)->next->tnext = (*a);
		(*a) = m;
		ft_settnext(a);
		ft_setnext(a);
		ft_cleartnext(a);
		get_pos(a);
	}
	if (i == 1)
		write(1, "sa\n", 3);
}
