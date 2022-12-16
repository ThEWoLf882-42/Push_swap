/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:29:29 by agimi             #+#    #+#             */
/*   Updated: 2022/12/14 14:22:53 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_size(long nb)
{
	size_t	size;

	size = 0;
	if (nb < 0)
	{
		nb = nb * (-1);
		size = 1;
	}
	if (nb == 0)
		size = 1;
	else
	{
		while (nb)
		{
			nb = nb / 10;
			size++;
		}
	}
	return (size);
}

char	*ft_itoa2(int n, int i)
{
	size_t	size;
	long	an;
	char	*as;
	int		j;
	size_t	t;

	j = -1;
	t = 0;
	size = count_size((long)n);
	as = (char *)malloc(i + 1);
	if (!as)
		return (0);
	an = (long)n;
	as[i] = '\0';
	while (t != size)
	{
		as[i - (size - size + 1)] = an % 10 + '0';
		an = an / 10;
		i--;
		t++;
	}
	while (++j < i)
		as[j] = '0';
	return (as);
}
