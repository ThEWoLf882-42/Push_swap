/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inita.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:44:30 by agimi             #+#    #+#             */
/*   Updated: 2022/12/25 17:13:01 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stacks	*inita(t_stacks *a, int argc, char **argv)
{
	int	i;

	if (argc >= 2)
		one_arg(&a, argv);
	if (argc >= 3)
	{
		i = 1;
		while (++i < argc)
		{
			if ((!(ft_digit(argv[i])) || ft_onlyone(argc, argv))
				|| ((ft_atoi(argv[i]) == 0) && ft_strcmp(argv[i], "0"))
				|| (ft_strcmp1(argv[i], ft_itoa(ft_atoi(argv[i]))))
				|| !(ft_atoi(argv[i]) >= -2147483648
					&& ft_atoi(argv[i]) <= 2147483647))
			{
				the_error(&a);
				return (NULL);
			}
			else
				ft_lstadd_back(&a, ft_lstnew(ft_atoi(argv[i]), 0));
		}
		get_rank(&a);
	}
	only_one(&a);
	return (a);
}
