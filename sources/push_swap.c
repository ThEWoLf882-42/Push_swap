/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:53:25 by agimi             #+#    #+#             */
/*   Updated: 2022/12/08 15:43:03 by agimi            ###   ########.fr       */
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