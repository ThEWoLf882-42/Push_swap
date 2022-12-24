/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   its_ok.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 19:33:49 by agimi             #+#    #+#             */
/*   Updated: 2022/12/23 19:41:07 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	its_ok(t_stacks **s)
{
	t_stacks	*m;

	m = (*s);
	while ((*s)->next)
	{
		if ((*s)->rank != ((*s)->next->rank) - 1)
		{
			(*s) = m;
			return (0);
		}
		(*s) = (*s)->next;
	}
	(*s) = m;
	return (1);
}
