/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:53:29 by agimi             #+#    #+#             */
/*   Updated: 2022/12/09 16:59:34 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

void		sa(t_stacks **a);
void		sb(t_stacks **b);
void		ss(t_stacks **a, t_stacks **b);
void		pa(t_stacks **a, t_stacks **b);
void		pb(t_stacks **a, t_stacks **b);
void		ra(t_stacks **a);
void		rb(t_stacks **b);
void		rr(t_stacks **a, t_stacks **b);
void		rra(t_stacks **a);
void		rrb(t_stacks **b);
void		rrr(t_stacks **a, t_stacks **b);
t_stacks	*inita(t_stacks *a, int argc, char **argv);
void		sort(t_stacks **a, t_stacks **b);
void		rank(t_stacks *s);

#endif