/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 14:45:26 by agimi             #+#    #+#             */
/*   Updated: 2022/12/26 15:58:32 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*check_com(t_stacks **a, t_stacks **b, char *commamde)
{
	if (ft_strcmp(commamde, "sa\n"))
		sa(a, 0);
	if (ft_strcmp(commamde, "sb\n"))
		sb(a, 0);
	if (ft_strcmp(commamde, "pa\n"))
		pa(a, b, 0);
	if (ft_strcmp(commamde, "pb\n"))
		pb(a, b, 0);
	if (ft_strcmp(commamde, "ra\n"))
		ra(a, 0);
	if (ft_strcmp(commamde, "rb\n"))
		rb(a, 0);
	if (ft_strcmp(commamde, "rra\n"))
		rra(a, 0);
	if (ft_strcmp(commamde, "rrb\n"))
		rrb(a, 0);
	if (ft_strcmp(commamde, "rr\n"))
		rr(a, 0);
	if (ft_strcmp(commamde, "ss\n"))
		ss(a, 0);
	if (ft_strcmp(commamde, "rrr\n"))
		rrr(a, 0);
	else
		the_error(a);
	return (get_next_line(0));
}

void	check(t_stacks **a, t_stacks **b, char *commamde)
{
	char	*m;

	while (commamde && *commamde != '\n')
	{
		m = commamde;
		commamde = check_com(a, b, commamde);
		free(m);
	}
	if (*b)
		write(1, "KO\n", 3);
	else if (!its_ok(a))
		write(1, "KO\n", 3);
	else
		write(1, "OK\n", 3);
	free(m);
}

int	main(int argc, char **argv)
{
	t_stacks	*a;
	t_stacks	*b;
	char		*commande;

	a = NULL;
	b = NULL;
	if (argc > 1)
	{
		inita(&a, argc, argv);
		commande = get_next_line(0);
		if (!commande && !its_ok(&a))
			write(1, "KO\n", 3);
		else if (!commande && its_ok(&a))
			write(1, "OK\n", 3);
		else
			check(&a, &b, commande);
		free_them_all(&a);
		free_them_all(&b);
	}
}
