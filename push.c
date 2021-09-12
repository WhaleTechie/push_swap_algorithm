/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 21:37:00 by lkrinova          #+#    #+#             */
/*   Updated: 2021/08/13 00:16:16 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	pa(t_all *ps)
{
	int	i;

	ps->len_a++;
	i = ps->len_a - 1;
	while (i > 0)
	{
		ps->stack_a[i] = ps->stack_a[i - 1];
		i--;
	}
	ps->stack_a[0] = ps->stack_b[0];
	ps->len_b--;
	i = 0;
	while (i < ps->len_b)
	{
		ps->stack_b[i] = ps->stack_b[i + 1];
		i++;
	}
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_all *ps)
{
	int	i;

	if (ps->len_b > 0)
	{
		ps->len_b++;
		i = ps->len_b - 1;
		while (i > 0)
		{
			ps->stack_b[i] = ps->stack_b[i - 1];
			i--;
		}
	}
	else
		ps->len_b++;
	ps->stack_b[0] = ps->stack_a[0];
	i = 0;
	while (i < ps->len_a)
	{
		ps->stack_a[i] = ps->stack_a[i + 1];
		i++;
	}
	ps->len_a--;
	ft_putstr_fd("pb\n", 1);
}	
