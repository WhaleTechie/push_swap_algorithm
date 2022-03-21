
#include "includes/push_swap.h"

void	rra(t_all *ps)
{
	int	temp;
	int	i;

	temp = ps->stack_a[ps->len_a - 1];
	i = ps->len_a - 1;
	while (i > 0)
	{
		ps->stack_a[i] = ps->stack_a[i - 1];
		i--;
	}
	ps->stack_a[0] = temp;
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_all *ps)
{
	int	temp;
	int	i;

	temp = ps->stack_b[ps->len_b - 1];
	i = ps->len_b - 1;
	while (i > 0)
	{
		ps->stack_b[i] = ps->stack_b[i - 1];
		i--;
	}
	ps->stack_b[0] = temp;
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_all *ps)
{
	int	temp;
	int	i;

	temp = ps->stack_a[ps->len_a - 1];
	i = ps->len_a;
	while (i > 0)
	{
		ps->stack_a[i] = ps->stack_a[i - 1];
		i--;
	}
	ps->stack_a[0] = temp;
	temp = ps->stack_b[ps->len_b - 1];
	i = ps->len_b;
	while (i > 0)
	{
		ps->stack_b[i] = ps->stack_b[i - 1];
		i--;
	}
	ps->stack_b[0] = temp;
	ft_putstr_fd("rrr\n", 1);
}
