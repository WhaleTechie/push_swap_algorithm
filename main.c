/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 16:36:59 by lkrinova          #+#    #+#             */
/*   Updated: 2021/08/12 19:22:07 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	find_big_small_a(t_all *ps)
{
	int	i;

	i = 0;
	ps->big_a = ps->stack_a[i];
	ps->big_a_i = i;
	ps->small_a = ps->stack_a[i];
	ps->small_a_i = i;
	while (i < ps->len_a)
	{
		if (ps->stack_a[i] > ps->big_a)
		{
			ps->big_a = ps->stack_a[i];
			ps->big_a_i = i;
		}
		else if (ps->stack_a[i] < ps->small_a)
		{
			ps->small_a = ps->stack_a[i];
			ps->small_a_i = i;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_all	struc;

	if (argc < 2)
		return (0);
	if (init_stacks(&struc, argc - 1) != 0)
		return (str_error("Malloc error\n"));
	if (parse(argv, &struc, argc) != 0)
		return (error_free("Error\n", &struc));
	if (is_dupl(&struc) == -1)
		return (error_free("Error\n", &struc));
	if (struc.len_a == 1)
		return (clean(&struc));
	if (is_sorted(&struc) == FAIL)
	{
		divide_stacks(&struc);
		solve_3(&struc);
		while (struc.len_b > 1)
		{
			best_b(&struc);
			pop_best(&struc);
		}
		final_sort(&struc);
	}
	return (clean(&struc));
}
