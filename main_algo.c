
#include "includes/push_swap.h"

void	mvs_for_first(t_all *ps)
{
	clean_mv(ps);
	ps->ind_cheap = 0;
	ps->cheapest_b = ps->stack_b[0];
	movs_ina(ps, ps->stack_b[0]);
	movs_inb(ps, 0);
	optimise_rr(ps);
	optimise_rrr(ps);
}

void	mvs_for_cheapest(t_all *ps)
{
	clean_mv(ps);
	movs_ina(ps, ps->cheapest_b);
	movs_inb(ps, ps->ind_cheap);
	optimise_rr(ps);
	optimise_rrr(ps);
}

void	best_b(t_all *ps)
{
	int	best_mov;
	int	i;

	mvs_for_first(ps);
	best_mov = ps->ra_mv + ps->rb_mv + ps->rra_mv + ps->rrb_mv + \
			ps->rr_mv + ps->rrr_mv;
	ps->cheapest_b = ps->stack_b[0];
	i = 0;
	while (i < ps->len_b)
	{
		clean_mv(ps);
		movs_ina(ps, ps->stack_b[i]);
		movs_inb(ps, i);
		optimise_rr(ps);
		optimise_rrr(ps);
		if (ps->ra_mv + ps->rb_mv + ps->rra_mv + ps->rrb_mv + \
		ps->rr_mv + ps->rrr_mv < best_mov)
			best_mov = remember_cheap(ps, i);
		i++;
	}
	mvs_for_cheapest(ps);
}

int	remember_cheap(t_all *ps, int i)
{
	int	best;

	best = ps->ra_mv + ps->rb_mv + ps->rra_mv + \
	ps->rrb_mv + ps->rr_mv + ps->rrr_mv;
	ps->cheapest_b = ps->stack_b[i];
	ps->ind_cheap = i;
	return (best);
}

void	clean_mv(t_all *ps)
{
	ps->ra_mv = 0;
	ps->rb_mv = 0;
	ps->rra_mv = 0;
	ps->rrb_mv = 0;
	ps->rr_mv = 0;
	ps->rrr_mv = 0;
}
