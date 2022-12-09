/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:53:29 by agimi             #+#    #+#             */
/*   Updated: 2022/12/09 17:19:28 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

void		sa(t_stacks **a, int i);
void		sb(t_stacks **b, int i);
void		ss(t_stacks **a, t_stacks **b);
void		pa(t_stacks **a, t_stacks **b, int i);
void		pb(t_stacks **a, t_stacks **b, int i);
void		ra(t_stacks **a, int i);
void		rb(t_stacks **b, int i);
void		rr(t_stacks **a, t_stacks **b);
void		rra(t_stacks **a, int i);
void		rrb(t_stacks **b, int i);
void		rrr(t_stacks **a, t_stacks **b);
t_stacks	*inita(t_stacks *a, int argc, char **argv);
void		sort(t_stacks **a, t_stacks **b);
void		get_rank(t_stacks *s);

#endif