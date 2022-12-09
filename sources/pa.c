/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 13:42:55 by agimi             #+#    #+#             */
/*   Updated: 2022/12/09 17:10:18 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stacks **a, t_stacks **b, int i)
{
	if (ft_lstsize((*b)) > 0)
	{
		ft_lstadd_front(a, ft_lstnew((*b)->content, ft_lstsize((*a)) - 1));
		(*b) = (*b)->next;
		ft_settnext(a);
		ft_setnext(a);
		ft_cleartnext(a);
	}
	if (i == 1)
		write(1, "pa", 2);
}
