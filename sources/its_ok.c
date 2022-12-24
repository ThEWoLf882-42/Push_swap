/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   its_ok.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 19:33:49 by agimi             #+#    #+#             */
/*   Updated: 2022/12/24 18:46:31 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	its_ok(t_stacks **s)
{
	t_stacks	*m;
	int			i;

	m = (*s);
	i = m->content;
	while (m)
	{
		if (i > m->content)
			return (0);
		i = m->content;
		m = m->next;
	}
	return (1);
}

// int	its_ok(t_stacks **s)
// {
// 	t_stacks	*m;

// 	m = (*s);
// 	while (m->next)
// 	{
// 		if (m->rank != (m->next->rank) - 1)
// 		{
// 			m = m;
// 			return (0);
// 		}
// 		m = m->next;
// 	}
// 	return (1);
// }