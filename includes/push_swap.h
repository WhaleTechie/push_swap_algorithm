/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 16:36:39 by lkrinova          #+#    #+#             */
/*   Updated: 2021/08/12 19:23:30 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# define FAIL -1
# define OK 1

typedef struct s_all
{
	int	len_a;
	int	len_b;
	int	*stack_a;
	int	*stack_b;
	int	big_a;
	int	small_a;
	int	big_a_i;
	int	small_a_i;
	int	cnt_mov;
	int	ra_mv;
	int	rb_mv;
	int	rra_mv;
	int	rrb_mv;
	int	rr_mv;
	int	rrr_mv;
	int	cheapest_b;
	int	ind_cheap;
}	t_all;

int		str_error(char *str);
int		error_free(char *str, t_all *ps);
int		clean(t_all *ps);
int		ft_atoi(const char *str, t_all *ps, int n);
int		check_isdigit(char **argv);
int		parse(char **args, t_all *strc, int count);
int		init_stacks(t_all *strc, int count);
int		is_dupl(t_all *ps);
void	ft_putstr_fd(char *s, int fd);

/*
** Push to top[s of stacks
*/

void	pa(t_all *ps);
void	pb(t_all *ps);
/*
** Swap two first ints in stacks
*/
void	sa(t_all *ps);
void	sb(t_all *ps);
void	ss(t_all *ps);
/*
** Rotate. First => last
*/
void	ra(t_all *ps);
void	rb(t_all *ps);
void	rr(t_all *ps);
void	rra(t_all *ps);
void	rrb(t_all *ps);
void	rrr(t_all *ps);
/*
** Reverse rotate. Last => first
*/
int		is_sorted(t_all *ps);
/*
** Solve with small number of ints
*/
void	solve_2(t_all *ps);
void	solve_3(t_all *ps);
/*
** Calculate moves in stacks
*/
void	find_big_small_a(t_all *ps);
void	movs_ina(t_all *ps, int numbr);
void	is_newsmall(t_all *ps);
void	is_newbig(t_all *ps);
void	movs_inb(t_all *ps, int ind);
void	mvs_for_first( t_all *ps);
void	mvs_for_cheapest(t_all *ps);
void	optimise_rr(t_all *ps);
void	optimise_rrr(t_all *ps);
void	clean_mv(t_all *ps);
/*
** Find best
*/
void	best_b(t_all *ps);
int		remember_cheap(t_all *ps, int i);
void	pop_best(t_all	*ps);
void	pop_minimize(t_all *ps);
void	divide_stacks(t_all *ps);
void	final_sort(t_all *ps);
void	diff_len(int i, int len, t_all *ps, int even);
#endif
