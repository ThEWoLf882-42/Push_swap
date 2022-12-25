/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 19:35:56 by agimi             #+#    #+#             */
/*   Updated: 2022/12/25 17:22:33 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stacks **a, t_stacks **b, int i)
{
	t_stacks	*m;

	m = (*a);
	if (ft_lstsize((*a)) > 0)
	{
		ft_lstadd_front(b, ft_lstnew((*a)->content, (*a)->rank));
		(*a) = (*a)->next;
		m->content = 0;
		m->rank = 0;
		free(m);
		ft_settnext(b);
		ft_setnext(b);
		ft_cleartnext(b);
	}
	if (i == 1)
		write(1, "pb\n", 3);
}
