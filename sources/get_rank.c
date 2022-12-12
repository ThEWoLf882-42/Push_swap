/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_rank.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:18:31 by agimi             #+#    #+#             */
/*   Updated: 2022/12/12 18:47:28 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_rank(t_stacks **s)
{
	t_stacks	*m;
	t_stacks	*t;

	reset_rank(s);
	m = (*s);
	t = (*s);
	while (m)
	{
		while (t)
		{
			if (m->content < t->content)
				m->rank -= 1;
			t = t->next;
		}
		t = *s;
		m = m->next;
	}
	m = *s;
	while (m)
	{
		m->srank = ft_itoa2(m->rank, ft_maxint(s) + 1);
		m = m->next;
	}
}
