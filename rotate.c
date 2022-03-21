
#include "includes/push_swap.h"

void	ra(t_all *ps)
{
	int	temp;
	int	i;

	temp = ps->stack_a[0];
	i = 0;
	while (i < ps->len_a - 1)
	{
		ps->stack_a[i] = ps->stack_a[i + 1];
		i++;
	}
	ps->stack_a[ps->len_a - 1] = temp;
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_all *ps)
{
	int	temp;
	int	i;

	temp = ps->stack_b[0];
	i = 0;
	while (i < ps->len_b)
	{
		ps->stack_b[i] = ps->stack_b[i + 1];
		i++;
	}
	ps->stack_b[ps->len_b - 1] = temp;
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_all *ps)
{
	int	temp;
	int	i;

	temp = ps->stack_a[0];
	i = 0;
	while (i < ps->len_a)
	{
		ps->stack_a[i] = ps->stack_a[i + 1];
		i++;
	}
	ps->stack_a[ps->len_a - 1] = temp;
	temp = ps->stack_b[0];
	i = 0;
	while (i < ps->len_b)
	{
		ps->stack_b[i] = ps->stack_b[i + 1];
		i++;
	}
	ps->stack_b[ps->len_b - 1] = temp;
	ft_putstr_fd("rr\n", 1);
}
