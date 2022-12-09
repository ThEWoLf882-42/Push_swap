/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:23:53 by agimi             #+#    #+#             */
/*   Updated: 2022/12/09 16:36:32 by agimi            ###   ########.fr       */
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
	int				rank;
	struct s_list	*next;
	struct s_list	*tnext;
}					t_stacks;

long long	ft_atoi(const char *str);
char		*ft_itoa(int n);
int			ft_isspace(size_t c);
t_stacks	*ft_lstnew(int content, int argc);
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
int			ft_onlyone(int argc, char **argv);
int			ft_strcmp(const char *s1, const char *s2);
void		ft_lstadd_front(t_stacks **alst, t_stacks *new);

#endif