
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
