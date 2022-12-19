/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:53:25 by agimi             #+#    #+#             */
/*   Updated: 2022/12/17 19:57:06 by agimi            ###   ########.fr       */
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
		sort(&a, &b);
		// while (a)
		// {
		// 	printf("a = %d rank = %d	pos = %d	srank = %s\n", a->content,
		// 		a->rank, a->pos, a->srank);
		// 	a = a->next;
		// }
		// printf("\n");
		// while (b)
		// {
		// 	printf("b = %d rank = %d	pos = %d	srank = %s\n", b->content,
		// 		b->rank, b->pos, b->srank);
		// 	b = b->next;
		// }
		free(a);
		free(b);
	}
}
