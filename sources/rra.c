/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:24:24 by agimi             #+#    #+#             */
/*   Updated: 2022/12/11 14:13:57 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stacks **a, int i)
{
	t_stacks	*m;

	if (ft_lstsize(&**a) > 1)
	{
		ft_setrr(a);
		m = ft_lstlast(&**a);
		m->tnext = (*a);
		(*a) = m;
		ft_setnext(a);
		ft_cleartnext(a);
		get_pos(a);
	}
	if (i == 1)
		write(1, "rra\n", 4);
}
