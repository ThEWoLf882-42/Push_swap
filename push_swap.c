/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:53:25 by agimi             #+#    #+#             */
/*   Updated: 2022/12/04 20:18:57 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int			i;
	t_stacks	*a;
	t_stacks	*b;

	i = 0;
	if (argc > 1)
	{
		while (++i < argc)
			ft_lstadd_back(&a, ft_lstnew(ft_atoi(argv[i])));
		while (a)
		{
			printf("a = %d\n", a->content);
			a = a->next;
		}
		printf("\n");
		while (b)
		{
			printf("b = %d\n", b->content);
			b = b->next;
		}
	}
}
