/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_settnext.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:19:41 by agimi             #+#    #+#             */
/*   Updated: 2022/12/09 20:14:07 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_settnext(t_stacks **s)
{
	int	j;

	j = 1;
	while ((++j < (ft_lstsize(*s) + 1)))
		ft_tlstlast(*s)->tnext = ft_tlstlast(*s)->next;
}
