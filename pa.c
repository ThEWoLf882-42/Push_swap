/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 19:35:56 by agimi             #+#    #+#             */
/*   Updated: 2022/12/04 14:51:32 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stacks **a, t_stacks **b)
{
	int	j;

	ft_lstadd_back(b, ft_lstnew((*a)->content));
	(*a) = (*a)->next;
	ft_settnext(b);
	ft_setnext(b);
	ft_cleartnext(b);
}
