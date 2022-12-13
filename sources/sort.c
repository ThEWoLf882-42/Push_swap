/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:10:46 by agimi             #+#    #+#             */
/*   Updated: 2022/12/13 14:27:22 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_stacks **a, t_stacks **b)
{
	if (ft_lstsize((*a)) == 2)
		sort2a(a);
	else if (ft_lstsize((*a)) == 3)
		sort3a(a);
	else if (ft_lstsize((*a)) == 4)
		sort4(a, b);
	else if (ft_lstsize((*a)) == 5)
		sort5(a, b);
}

// while ((*a))
// {
// 	get_pos(a);
// 	while (m && m->rank != i)
// 		m = m->next;
// 	i++;
// 	if (m->pos <= ft_lstsize(*a) / 2)
// 		while ((*a)->rank != j)
// 			ra(a, 1);
// 	if (m->pos > ft_lstsize(*a) / 2)
// 		while ((*a)->rank != j)
// 			rra(a, 1);
// 	m = (*a);
// 	if ((*a)->rank == j)
// 	{	
// 		pb(a, b, 1);
// 		j++;
// 	}
// }
// while ((*b))
// 	pa(a, b, 1);