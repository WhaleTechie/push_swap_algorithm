
#include "includes/push_swap.h"

void	movs_ina(t_all *ps, int numbr)
{
	int	i;

	find_big_small_a(ps);
	if (numbr > ps->small_a)
	{
		if (numbr < ps->big_a)
		{
			i = ps->big_a_i;
			while (ps->stack_a[i] > numbr)
			{
				i--;
				if (i == -1)
					i = ps->len_a - 1;
			}
			i++;
			if (i <= ps->len_a / 2)
				ps->ra_mv = i;
			else
				ps->rra_mv = ps->len_a - i;
		}
		else
			is_newbig(ps);
	}
	else
		is_newsmall(ps);
}

void	movs_inb(t_all *ps, int ind)
{
	if (ind != 0)
	{
		if (ind <= ps->len_b / 2)
			ps->rb_mv = ind;
		else
			ps->rrb_mv = ps->len_b - ind;
	}
}

void	is_newbig(t_all *ps)
{
	int	i;

	i = ps->big_a_i + 1;
	if (i != ps->len_a)
	{
		if (i < ps->len_a / 2)
			ps->ra_mv = i;
		else
			ps->rra_mv = ps->len_a - i;
	}
}

void	is_newsmall(t_all *ps)
{
	int	i;

	i = ps->small_a_i;
	if (i != -1)
	{
		if (i <= ps->len_b / 2)
			ps->ra_mv = i;
		else
			ps->rra_mv = ps->len_a - i;
	}
}
