/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:53:29 by agimi             #+#    #+#             */
/*   Updated: 2022/12/22 19:38:24 by agimi            ###   ########.fr       */
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
void		sort2a(t_stacks **a);
void		sort2b(t_stacks **a);
void		sort3a(t_stacks **a);
void		sort3b(t_stacks **b);
void		sort4(t_stacks **a, t_stacks **b);
void		sort5(t_stacks **a, t_stacks **b);
void		sort_them_all(t_stacks **a, t_stacks **b);
void		get_binary(t_stacks **s);
int			sbin(t_stacks **s);
void		get_pos(t_stacks **s);
void		sorta_3(t_stacks **a, t_stacks **b);
void		sortb_3(t_stacks **a, t_stacks **b);
int			case_rrarrb(t_stacks **a, t_stacks **b, int c);
int			case_rarb(t_stacks **a, t_stacks **b, int c);
int			case_rarrb(t_stacks **a, t_stacks **b, int c);
int			case_rrarb(t_stacks **a, t_stacks **b, int c);
int			case_rarb_a(t_stacks **a, t_stacks **b, int c);
int			case_rrarrb_a(t_stacks **a, t_stacks **b, int c);
int			case_rarrb_a(t_stacks **a, t_stacks **b, int c);
int			case_rrarb_a(t_stacks **a, t_stacks **b, int c);
int			b_place(t_stacks **b, int nb);
int			a_place(t_stacks **a, int nb);
int			apply_rarb(t_stacks **a, t_stacks **b, int c, char s);
int			apply_rrarrb(t_stacks **a, t_stacks **b, int c, char s);
int			apply_rrarb(t_stacks **a, t_stacks **b, int c, char s);
int			apply_rarrb(t_stacks **a, t_stacks **b, int c, char s);
int			rotate_type_ba(t_stacks **a, t_stacks **b);
int			rotate_type_ab(t_stacks **a, t_stacks **b);
int			rpos(t_stacks **s, int n);

#endif