/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_one.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 14:45:55 by agimi             #+#    #+#             */
/*   Updated: 2022/12/25 15:04:28 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
			{
				write(2, "Error\n", 6);
				free_them_all(a);
				return ;
			}
			j = j->next;
		}
		m = m->next;
	}
}
