/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_little.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 08:37:05 by lkrinova          #+#    #+#             */
/*   Updated: 2021/08/15 08:37:08 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	solve_2(t_all *ps)
{
	if (ps->stack_a[0] > ps->stack_a[1])
		sa(ps);
}

void	solve_3(t_all *ps)
{
	find_big_small_a(ps);
	if (ps->big_a_i == 0)
		ra(ps);
	else if (ps->big_a_i == 1)
		rra(ps);
	solve_2(ps);
}

void	divide_stacks(t_all *ps)
{
	while (ps->len_a > 3)
		pb(ps);
}
