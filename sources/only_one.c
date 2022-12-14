/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_one.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 14:45:55 by agimi             #+#    #+#             */
/*   Updated: 2022/12/29 13:11:50 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	the_error(t_stacks **a)
{
	write(2, "Error\n", 6);
	free_them_all(a);
	exit(1);
}

void	only_one(t_stacks **a)
{
	t_stacks	*m;
	t_stacks	*j;

	m = (*a);
	while (m)
	{
		j = m->next;
		while (j)
		{
			if (j->content == m->content)
				the_error(a);
			j = j->next;
		}
		m = m->next;
	}
}
