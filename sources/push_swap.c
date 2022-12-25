/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:53:25 by agimi             #+#    #+#             */
/*   Updated: 2022/12/25 17:26:34 by agimi            ###   ########.fr       */
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
		{
			free_them_all(&a);
			return (0);
		}
		sort(&a, &b);
		free_them_all(&a);
	}
}
