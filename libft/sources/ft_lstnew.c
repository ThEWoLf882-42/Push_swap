/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:24:46 by agimi             #+#    #+#             */
/*   Updated: 2022/12/16 11:49:45 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stacks	*ft_lstnew(int content, int rank, char *srank, int pos)
{
	t_stacks	*new;

	new = malloc(sizeof(t_stacks));
	if (!new)
		return (NULL);
	new->content = content;
	new->rank = rank;
	new->pos = pos;
	new->srank = srank;
	new->bin = NULL;
	new->next = NULL;
	new->tnext = NULL;
	return (new);
}
