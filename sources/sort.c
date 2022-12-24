/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:10:46 by agimi             #+#    #+#             */
/*   Updated: 2022/12/24 19:47:22 by agimi            ###   ########.fr       */
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
	else if (ft_lstsize((*a)) >= 5 && !its_ok(a))
		sort_them_all(a, b);
}
