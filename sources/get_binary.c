/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_binary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 19:11:54 by agimi             #+#    #+#             */
/*   Updated: 2022/12/15 12:44:55 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sbin(t_stacks **s)
{
	int	i;
	int	j;

	i = ft_maxint(s, 2);
	j = 0;
	while (i)
	{
		i = i / 2;
		j++;
	}
	return (j);
}

static void	the_bin(t_stacks **s, t_stacks *m, char *str)
{
	int			i;
	int			j;
	int			t;

	j = -1;
	i = sbin(s);
	t = i;
	while (++j < t)
	{
		if (m->rank & (1 << j))
			str[i-- - 1] = '1';
		else
			str[i-- - 1] = '0';
	}
	m->bin = ft_itoa2(ft_atoi(str), t);
}

void	get_binary(t_stacks **s)
{
	t_stacks	*m;
	int			i;
	char		*str;

	m = (*s);
	i = sbin(s);
	str = malloc(i + 1);
	str[i + 1] = '\0';
	while (m)
	{
		the_bin(s, m, str);
		m = m->next;
	}
	free(str);
}
