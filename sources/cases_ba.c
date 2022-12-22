/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases_ba.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:13:41 by agimi             #+#    #+#             */
/*   Updated: 2022/12/22 19:38:49 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	case_rarb_a(t_stacks **a, t_stacks **b, int c)
{
	int	i;

	i = a_place(a, c);
	if (i < rpos(b, c))
		i = rpos(b, c);
	return (i);
}

int	case_rrarrb_a(t_stacks **a, t_stacks **b, int c)
{
	int	i;

	i = 0;
	if (a_place(a, c))
		i = ft_lstsize(*a) - a_place(a, c);
	if ((i < (ft_lstsize(*b) - rpos(b, c))) && rpos(b, c))
		i = ft_lstsize(*b) - rpos(b, c);
	return (i);
}

int	case_rarrb_a(t_stacks **a, t_stacks **b, int c)
{
	int	i;

	i = 0;
	if (rpos(b, c))
		i = ft_lstsize(*b) - rpos(b, c);
	i = a_place(a, c) + i;
	return (i);
}

int	case_rrarb_a(t_stacks **a, t_stacks **b, int c)
{
	int	i;

	i = 0;
	if (a_place(a, c))
		i = ft_lstsize(*a) - a_place(a, c);
	i = rpos(b, c) + i;
	return (i);
}
