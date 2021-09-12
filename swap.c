/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrinova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 21:26:26 by lkrinova          #+#    #+#             */
/*   Updated: 2021/08/12 21:36:51 by lkrinova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	sa(t_all *ps)
{
	int	temp;

	temp = ps->stack_a[0];
	ps->stack_a[0] = ps->stack_a[1];
	ps->stack_a[1] = temp;
	ps->cnt_mov++;
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_all *ps)
{
	int	temp;

	temp = ps->stack_b[0];
	ps->stack_b[0] = ps->stack_b[1];
	ps->stack_b[1] = temp;
	ps->cnt_mov++;
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_all *ps)
{
	int	temp;

	temp = ps->stack_a[0];
	ps->stack_a[0] = ps->stack_a[1];
	ps->stack_a[1] = temp;
	temp = ps->stack_b[0];
	ps->stack_b[0] = ps->stack_b[1];
	ps->stack_b[1] = temp;
	ps->cnt_mov++;
	ft_putstr_fd("ss\n", 1);
}
