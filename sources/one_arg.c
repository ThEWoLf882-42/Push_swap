/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_arg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 13:29:39 by agimi             #+#    #+#             */
/*   Updated: 2022/12/25 17:30:05 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	tests(char *n)
{
	if ((!(ft_digit(n)))
		|| ((ft_atoi(n) == 0) && ft_strcmp(n, "0"))
		|| (ft_strcmp1(n, ft_itoa(ft_atoi(n))))
		|| !(ft_atoi(n) >= -2147483648
			&& ft_atoi(n) <= 2147483647))
		return (1);
	else
		return (0);
}

void	one_arg(t_stacks **a, char **argv)
{
	int		i;
	int		j;
	char	*n;

	i = 0;
	n = malloc(sizeof(char) * 13);
	while (argv[1][i])
	{
		j = 0;
		while (argv[1][i] != ' ' && argv[1][i] != '\0')
			n[j++] = argv[1][i++];
		while (argv[1][i] == ' ')
			i++;
		n[j] = '\0';
		if (tests(n))
		{
			the_error(a);
			break ;
		}
		else
			ft_lstadd_back(a, ft_lstnew(ft_atoi(n), 0));
	}
	free(n);
	only_one(a);
}
