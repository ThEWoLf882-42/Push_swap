/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:23:53 by agimi             #+#    #+#             */
/*   Updated: 2022/12/05 17:02:01 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
	struct s_list	*tnext;
}					t_stacks;

int			ft_atoi(const char *str);
int			ft_isspace(size_t c);
t_stacks	*ft_lstnew(int content);
void		ft_lstadd_back(t_stacks **alst, t_stacks *new);
t_stacks	*ft_lstlast(t_stacks *lst);
t_stacks	*ft_tlstlast(t_stacks *lst);
int			ft_lstsize(t_stacks *lst);
char		*ft_strdup(const char *s1);
void		ft_settnext(t_stacks **s);
void		ft_setnext(t_stacks **s);
void		ft_cleartnext(t_stacks **s);
void		ft_setrr(t_stacks **s);
int			ft_digit(char *s);
// void		ft_setnull(int *d);
// void		ft_lstclear(t_stacks **s, void (*del)(int *));

#endif