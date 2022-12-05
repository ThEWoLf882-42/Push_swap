/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:24:46 by agimi             #+#    #+#             */
/*   Updated: 2022/12/04 14:34:17 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stacks	*ft_lstnew(int content)
{
	t_stacks	*new;

	new = malloc(sizeof(t_stacks));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	new->tnext = NULL;
	return (new);
}
