/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:53:25 by agimi             #+#    #+#             */
/*   Updated: 2022/12/12 14:39:42 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	*a;
	t_stacks	*b;

	a = NULL;
	b = NULL;
	if (argc > 1)
	{
		a = inita(a, argc, argv);
		if (a == NULL)
			return (0);
		get_pos(&a);
		get_rank(&a);
		sort(&a, &b);
		while (a)
		{
			printf("a = %d rank = %d\n", a->content, a->rank);
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
