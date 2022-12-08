/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 13:42:55 by agimi             #+#    #+#             */
/*   Updated: 2022/12/08 19:50:18 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stacks **a, t_stacks **b)
{
	if (ft_lstsize((*b)) > 0)
	{
		ft_lstadd_front(a, ft_lstnew((*b)->content));
		(*b) = (*b)->next;
		ft_settnext(a);
		ft_setnext(a);
		ft_cleartnext(a);
	}
}
