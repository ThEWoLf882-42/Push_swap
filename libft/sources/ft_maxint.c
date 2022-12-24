/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:55:55 by agimi             #+#    #+#             */
/*   Updated: 2022/12/23 19:30:47 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_maxint(t_stacks **s, int x)
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
	if (x == 1)
		return (ft_strlen(ft_itoa(i)));
	if (x == 2)
		return (i);
	return (0);
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
