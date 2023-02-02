/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   its_ok.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 19:33:49 by agimi             #+#    #+#             */
/*   Updated: 2023/01/20 20:19:43 by agimi            ###   ########.fr       */
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
