/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpos.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:15:09 by agimi             #+#    #+#             */
/*   Updated: 2022/12/22 19:44:30 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rpos(t_stacks **s, int n)
{
	t_stacks	*m;

	get_pos(s);
	m = (*s);
	while (m->content != n)
		m = m->next;
	return (m->pos);
}
