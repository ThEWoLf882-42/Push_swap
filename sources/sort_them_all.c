/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_them_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:44:39 by agimi             #+#    #+#             */
/*   Updated: 2022/12/19 17:37:03 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_a(t_stacks **a, t_stacks **b)
{
	
}

void	sort_b(t_stacks **a, t_stacks **b)
{
	if (ft_lstsize(*a) > 3 && !its_ok(a))
		pb(a, b, 1);
	if (ft_lstsize(*a) > 3 && !its_ok(a))
		pb(a, b, 1);
	if (ft_lstsize(*a) > 3 && !its_ok(a))
		sortb_3(a, b);
	if (!its_ok(a))
		sort3a(a);
}

void	sort_them_all(t_stacks **a, t_stacks **b)
{
	
}
