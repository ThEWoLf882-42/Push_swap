/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:27:18 by agimi             #+#    #+#             */
/*   Updated: 2022/12/04 14:34:13 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_stacks **a, t_stacks *new)
{
	if (!a || !new)
		return ;
	if (*a)
		ft_lstlast(*a)->next = new;
	else
		*a = new;
}
