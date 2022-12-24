/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpos.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:15:09 by agimi             #+#    #+#             */
/*   Updated: 2022/12/23 19:30:20 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rpos(t_stacks **s, int n)
{
	t_stacks	*m;
	int			i;

	i = 0;
	m = (*s);
	while (m->content != n)
	{
		i++;
		m = m->next;
	}
	return (i);
}
