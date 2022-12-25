/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_them_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 11:55:10 by agimi             #+#    #+#             */
/*   Updated: 2022/12/25 17:03:43 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_them_all(t_stacks **s)
{
	t_stacks	*m;

	while (*s)
	{
		m = (*s)->next;
		(*s)->content = 0;
		(*s)->rank = 0;
		free(*s);
		*s = m;
	}
}
