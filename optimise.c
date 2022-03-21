
#include "includes/push_swap.h"

void	optimise_rr(t_all *ps)
{
	if (ps->ra_mv != 0 && ps->rb_mv != 0)
	{
		if (ps->ra_mv > ps->rb_mv)
		{
			ps->ra_mv = ps->ra_mv - ps->rb_mv;
			ps->rr_mv = ps->rb_mv;
			ps->rb_mv = 0;
		}
		else if (ps->ra_mv == ps->rb_mv)
		{
			ps->rr_mv = ps->ra_mv;
			ps->ra_mv = 0;
			ps->rb_mv = 0;
		}
		else if (ps->ra_mv < ps->rb_mv)
		{
			ps->rb_mv = ps->rb_mv - ps->ra_mv;
			ps->rr_mv = ps->ra_mv;
			ps->ra_mv = 0;
		}
	}
}

void	optimise_rrr(t_all *ps)
{
	if (ps->rra_mv != 0 && ps->rrb_mv != 0)
	{
		if (ps->rra_mv > ps->rrb_mv)
		{
			ps->rra_mv = ps->rra_mv - ps->rrb_mv;
			ps->rrr_mv = ps->rrb_mv;
			ps->rrb_mv = 0;
		}
		else if (ps->rra_mv == ps->rrb_mv)
		{
			ps->rrr_mv = ps->rra_mv;
			ps->rra_mv = 0;
			ps->rrb_mv = 0;
		}
		else
		{
			ps->rrb_mv = ps->rrb_mv - ps->rra_mv;
			ps->rrr_mv = ps->rra_mv;
			ps->rra_mv = 0;
		}
	}
}
