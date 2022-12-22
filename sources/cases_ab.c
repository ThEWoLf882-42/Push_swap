/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases_ab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 17:54:27 by agimi             #+#    #+#             */
/*   Updated: 2022/12/22 19:38:49 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	case_rrarrb(t_stacks **a, t_stacks **b, int c)
{
	int	i;

	i = 0;
	if (b_place(b, c))
		i = ft_lstsize(*b) - b_place(b, c);
	if ((i < (ft_lstsize(*a) - rpos(a, c))) && rpos(a, c))
		i = ft_lstsize(*a) - rpos(a, c);
	return (i);
}

int	case_rarb(t_stacks **a, t_stacks **b, int c)
{
	int	i;

	i = b_place(b, c);
	if (i < rpos(a, c))
		i = rpos(a, c);
	return (i);
}

int	case_rarrb(t_stacks **a, t_stacks **b, int c)
{
	int	i;

	i = 0;
	if (b_place(b, c))
		i = ft_lstsize(*b) - b_place(b, c);
	i = rpos(a, c) + i;
	return (i);
}

int	case_rrarb(t_stacks **a, t_stacks **b, int c)
{
	int	i;

	i = 0;
	if (rpos(a, c))
		i = ft_lstsize(*a) - rpos(a, c);
	i = b_place(b, c) + i;
	return (i);
}
