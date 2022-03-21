
#include "includes/push_swap.h"

int	parse(char **args, t_all *strc, int count)
{
	int	i;

	strc->len_a = count - 1;
	i = 1;
	while (args[i])
	{
		if (check_isdigit(args) != 0)
			return (-1);
		i++;
	}
	i = 0;
	while (i < strc->len_a)
	{
		if (ft_atoi(args[i + 1], strc, i) == FAIL)
			return (FAIL);
		i++;
	}
	strc->len_b = 0;
	strc->cnt_mov = 0;
	return (0);
}

int	init_stacks(t_all *strc, int count)
{
	strc->stack_a = malloc(sizeof(int) * (count));
	strc->stack_b = malloc(sizeof(int) * (count));
	return (0);
}

int	is_dupl(t_all *ps)
{
	int	i;
	int	n;
	int	tocheck;

	n = ps->len_a - 1;
	while (n > 0)
	{
		tocheck = ps->stack_a[n];
		i = n - 1;
		while (i >= 0)
		{
			if (tocheck != ps->stack_a[i])
				i--;
			else
				return (-1);
		}
		n--;
	}
	return (0);
}

int	error_free(char *str, t_all *ps)
{
	free(ps->stack_a);
	free(ps->stack_b);
	ft_putstr_fd(str, 1);
	return (-1);
}

int	clean(t_all *ps)
{
	free(ps->stack_a);
	free(ps->stack_b);
	return (0);
}
