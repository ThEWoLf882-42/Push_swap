/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_rank.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:18:31 by agimi             #+#    #+#             */
/*   Updated: 2022/12/09 17:20:21 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_rank(t_stacks *s)
{
	t_stacks	*m;
	t_stacks	*t;

	m = s;
	t = s;
	while (s)
	{
		while (t)
		{
			if (s->content < t->content)
				s->rank -= 1;
			t = t->next;
		}
		t = m;
		s = s->next;
	}
}