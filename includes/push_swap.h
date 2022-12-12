/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:53:29 by agimi             #+#    #+#             */
/*   Updated: 2022/12/12 13:46:32 by agimi            ###   ########.fr       */
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
void		get_rank(t_stacks **s);
void		reset_rank(t_stacks **s);
int			its_ok(t_stacks **s);
void		sort2(t_stacks **a);
void		sort3(t_stacks **a);
void		sort5(t_stacks **a, t_stacks **b);
void		get_pos(t_stacks **s);

#endif