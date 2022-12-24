/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:55:55 by agimi             #+#    #+#             */
/*   Updated: 2022/12/24 19:24:15 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_maxint(t_stacks **s)
{
	t_stacks	*m;
	int			i;

	m = (*s);
	i = m->content;
	while (m)
	{
		if (m->content > i)
			i = m->content;
		m = m->next;
	}
	return (i);
}

int	ft_minint(t_stacks **s)
{
	t_stacks	*m;
	int			i;

	m = (*s);
	i = m->content;
	while (m)
	{
		if (m->content < i)
			i = m->content;
		m = m->next;
	}
	return (i);
}
