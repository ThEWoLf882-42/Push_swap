/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 13:42:55 by agimi             #+#    #+#             */
/*   Updated: 2022/12/04 14:51:25 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stacks **a, t_stacks **b)
{
	int	j;

	ft_lstadd_back(a, ft_lstnew((*b)->content));
	(*b) = (*b)->next;
	ft_settnext(a);
	ft_setnext(a);
	ft_cleartnext(a);
}
