/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:03:54 by agimi             #+#    #+#             */
/*   Updated: 2022/12/27 15:19:28 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (s1[a] == '+')
		a++;
	if (s1[a] == '\0' && s2[a] == '\0')
		return (0);
	while ((s1[a] != '\0' || s2[b] != '\0'))
	{
		if (s1[a] != s2[b])
			return ((unsigned char)s1[a] - (unsigned char)s2[b]);
		a++;
		b++;
	}
	return (0);
}

int	ft_strcmp1(const char *s1, const char *s2)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (s1[a] == '+')
		a++;
	while (s1[a] == '0')
		a++;
	if (s1[a] == '\0' && s2[a] == '\0')
		return (0);
	while ((s1[a] != '\0' || s2[b] != '\0'))
	{
		if (s1[a] != s2[b])
			return ((unsigned char)s1[a] - (unsigned char)s2[b]);
		a++;
		b++;
	}
	free((void *)s2);
	return (0);
}

int	ft_cmp0(const char *s1, const char *s2)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (s1[a] == '+')
		a++;
	while (s1[a] == '0')
		a++;
	while ((s1[a] != '\0' || s2[b] != '\0'))
	{
		if (s1[a] != s2[b])
			return ((unsigned char)s1[a] - (unsigned char)s2[b]);
		a++;
		b++;
	}
	return (0);
}
