/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:24:46 by agimi             #+#    #+#             */
/*   Updated: 2022/12/12 14:53:17 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stacks	*ft_lstnew(int content, int argc)
{
	t_stacks	*new;

	new = malloc(sizeof(t_stacks));
	if (!new)
		return (NULL);
	new->content = content;
	new->rank = argc - 2;
	new->pos = 0;
	new->next = NULL;
	new->tnext = NULL;
	return (new);
}
