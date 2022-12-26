/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_arg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 13:29:39 by agimi             #+#    #+#             */
/*   Updated: 2022/12/26 16:30:28 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	tests(char *n)
{
	if ((!(ft_digit(n)))
		|| ((ft_atoi(n) == 0) && !ft_cmp0(n, "0"))
		|| (!ft_strcmp(n, "\0"))
		|| (ft_strcmp1(n, ft_itoa(ft_atoi(n))))
		|| !(ft_atoi(n) >= -2147483648
			&& ft_atoi(n) <= 2147483647))
		return (1);
	else
		return (0);
}

void	loop(t_stacks **a, char **argv, char *n, int r)
{
	int	i;
	int	j;

	i = 0;
	if (!ft_strcmp(argv[r], "\0"))
		the_error(a);
	while (argv[r][i])
	{
		j = 0;
		while (argv[r][i] == ' ')
			i++;
		while (argv[r][i] != ' ' && argv[r][i] != '\0')
			n[j++] = argv[r][i++];
		while (argv[r][i] == ' ')
			i++;
		n[j] = '\0';
		if (tests(n))
		{
			free(n);
			the_error(a);
		}
		else
			ft_lstadd_back(a, ft_lstnew(ft_atoi(n), 0));
	}
}

void	one_arg(t_stacks **a, char **argv)
{
	int		r;
	char	*n;

	r = 0;
	n = malloc(sizeof(char) * 13);
	while (argv[++r])
		loop(a, argv, n, r);
	free(n);
}
