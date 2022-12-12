/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 19:35:56 by agimi             #+#    #+#             */
/*   Updated: 2022/12/11 14:13:38 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stacks **a, t_stacks **b, int i)
{
	if (ft_lstsize((*a)) > 0)
	{
		ft_lstadd_front(b, ft_lstnew((*a)->content, ft_lstsize((*a)) - 1));
		(*a) = (*a)->next;
		ft_settnext(b);
		ft_setnext(b);
		ft_cleartnext(b);
		get_pos(b);
	}
	if (i == 1)
		write(1, "pb\n", 3);
}
