/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cleartnext.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:35:02 by agimi             #+#    #+#             */
/*   Updated: 2022/12/04 19:22:36 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_cleartnext(t_stacks **s)
{
	t_stacks	*m;

	m = (*s);
	if (m->tnext)
		ft_cleartnext((&m->tnext));
	m->tnext = NULL;
}
