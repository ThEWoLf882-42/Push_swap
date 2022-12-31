/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 14:45:26 by agimi             #+#    #+#             */
/*   Updated: 2022/12/29 13:11:45 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_com_sub(t_stacks **a, t_stacks **b, char *com)
{
	if (com[2] == 'a')
		rra(a, 0);
	else if (com[2] == 'b')
		rrb(b, 0);
	else if (com[2] == 'r')
		rrr(a, b, 0);
}

char	*check_com(t_stacks **a, t_stacks **b, char *com)
{
	if (com[0] == 's' && com[1] == 'a' && com[2] == '\n')
		sa(a, 0);
	else if (com[0] == 's' && com[1] == 'b' && com[2] == '\n')
		sb(b, 0);
	else if (com[0] == 'p' && com[1] == 'a' && com[2] == '\n')
		pa(a, b, 0);
	else if (com[0] == 'p' && com[1] == 'b' && com[2] == '\n')
		pb(a, b, 0);
	else if (com[0] == 'r' && com[1] == 'a' && com[2] == '\n')
		ra(a, 0);
	else if (com[0] == 'r' && com[1] == 'b' && com[2] == '\n')
		rb(b, 0);
	else if (com[0] == 'r' && com[1] == 'r' && com[3] == '\n')
		check_com_sub(a, b, com);
	else if (com[0] == 'r' && com[1] == 'r' && com[2] == '\n')
		rr(a, b, 0);
	else if (com[0] == 's' && com[1] == 's' && com[2] == '\n')
		ss(a, b, 0);
	else
		the_error(a);
	return (get_next_line(0));
}

void	check(t_stacks **a, t_stacks **b, char *com)
{
	char	*m;

	while (com && *com != '\n')
	{
		m = com;
		com = check_com(a, b, com);
		free(m);
	}
	if (!(*b) && its_ok(a))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	free(com);
}

int	main(int argc, char **argv)
{
	t_stacks	*a;
	t_stacks	*b;
	char		*com;

	a = NULL;
	b = NULL;
	if (argc > 1)
	{
		inita(&a, argc, argv);
		com = get_next_line(0);
		if (!com && !its_ok(&a))
			write(1, "KO\n", 3);
		else if (!com && its_ok(&a))
			write(1, "OK\n", 3);
		else
			check(&a, &b, com);
		free_them_all(&a);
		free_them_all(&b);
	}
}
