/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setnext.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:23:21 by agimi             #+#    #+#             */
/*   Updated: 2022/12/04 18:41:08 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_setnext(t_stacks **s)
{
	t_stacks	*m;

	m = (*s);
	while (m)
	{
		m->next = m->tnext;
		m = m->tnext;
	}
}
