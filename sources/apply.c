/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 17:59:03 by agimi             #+#    #+#             */
/*   Updated: 2022/12/27 15:58:52 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	apply_rarb(t_stacks **a, t_stacks **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->content != c && b_place(b, c) > 0)
			rr(a, b, 1);
		while ((*a)->content != c)
			ra(a, 1);
		while (b_place(b, c) > 0)
			rb(b, 1);
		pb(a, b, 1);
	}
	else
	{
		while ((*b)->content != c && a_place(a, c) > 0)
			rr(a, b, 1);
		while ((*b)->content != c)
			rb(b, 1);
		while (a_place(a, c) > 0)
			ra(a, 1);
		pa(a, b, 1);
	}
	return (-1);
}

int	apply_rrarrb(t_stacks **a, t_stacks **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->content != c && b_place(b, c) > 0)
			rrr(a, b, 1);
		while ((*a)->content != c)
			rra(a, 1);
		while (b_place(b, c) > 0)
			rrb(b, 1);
		pb(a, b, 1);
	}
	else
	{
		while ((*b)->content != c && a_place(a, c) > 0)
			rrr(a, b, 1);
		while ((*b)->content != c)
			rrb(b, 1);
		while (a_place(a, c) > 0)
			rra(a, 1);
		pa(a, b, 1);
	}
	return (-1);
}

int	apply_rrarb(t_stacks **a, t_stacks **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->content != c)
			rra(a, 1);
		while (b_place(b, c) > 0)
			rb(b, 1);
		pb(a, b, 1);
	}
	else
	{
		while (a_place(a, c) > 0)
			rra(a, 1);
		while ((*b)->content != c)
			rb(b, 1);
		pa(a, b, 1);
	}
	return (-1);
}

int	apply_rarrb(t_stacks **a, t_stacks **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->content != c)
			ra(a, 1);
		while (b_place(b, c) > 0)
			rrb(b, 1);
		pb(a, b, 1);
	}
	else
	{
		while (a_place(a, c) > 0)
			ra(a, 1);
		while ((*b)->content != c)
			rrb(b, 1);
		pa(a, b, 1);
	}
	return (-1);
}
