/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 19:51:43 by agimi             #+#    #+#             */
/*   Updated: 2022/12/04 14:34:23 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t		i;
	char		*ad;

	i = 0;
	while (s1[i])
		i++;
	ad = (char *)malloc(sizeof(char) * (i + 1));
	if (!ad)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		ad[i] = s1[i];
		i++;
	}
	ad[i] = '\0';
	return (ad);
}
