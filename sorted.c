/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 08:36:19 by lkrinova          #+#    #+#             */
/*   Updated: 2021/08/15 08:36:26 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	is_sorted(t_all *ps)
{
	int	i;

	find_big_small_a(ps);
	if (ps->small_a_i != 0)
		return (FAIL);
	if (ps->big_a_i != (ps->len_a - 1))
		return (FAIL);
	i = 0;
	while (i < ps->len_a - 1)
	{
		if (ps->stack_a[i + 1] < ps->stack_a[i])
			return (FAIL);
		i++;
	}
	return (OK);
}

void	final_sort(t_all *ps)
{
	int	i;
	int	len;
	int	even;

	clean_mv(ps);
	movs_ina(ps, ps->stack_b[0]);
	ps->cheapest_b = ps->stack_b[0];
	ps->ind_cheap = 0;
	pop_best(ps);
	even = 0;
	find_big_small_a(ps);
	if (ps->len_a % 2 == 0)
		even += 1;
	len = ps->len_a + even;
	i = ps->small_a_i;
	diff_len(i, len, ps, even);
}

void	diff_len(int i, int len, t_all *ps, int even)
{
	if (i <= len / 2)
	{
		while (i > 0)
		{
			ra(ps);
			i--;
		}
	}
	else
	{
		i = len - ps->small_a_i - even;
		while (i > 0)
		{
			rra(ps);
			i--;
		}
	}
}

void	pop_best(t_all	*ps)
{
	while (ps->ra_mv)
	{
		ra(ps);
		ps->ra_mv--;
	}
	while (ps->rb_mv)
	{
		rb(ps);
		ps->rb_mv--;
	}
	pop_minimize(ps);
	pa(ps);
}

void	pop_minimize(t_all *ps)
{
	while (ps->rra_mv)
	{
		rra(ps);
		ps->rra_mv--;
	}
	while (ps->rrb_mv)
	{
		rrb(ps);
		ps->rrb_mv--;
	}
	while (ps->rr_mv)
	{
		rr(ps);
		ps->rr_mv--;
	}
	while (ps->rrr_mv)
	{
		rrr(ps);
		ps->rrr_mv--;
	}
}
