
#include "includes/push_swap.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	str_error(char *str)
{
	write(1, str, ft_strlen(str));
	return (-1);
}

int	ft_atoi(const char *str, t_all *ps, int n)
{
	size_t	i;
	long	x;
	int		sign;

	i = 0;
	x = 0;
	sign = 1;
	if (str[i] == 45)
	{
		sign = -1;
		i++;
	}
	while ((str[i] >= 48) && (str[i] <= 57))
	{
		x = x * 10 + (str[i] - 48);
		if ((sign > 0 && x > INT_MAX) || (sign < 0 && x > (long)INT_MAX + 1))
			return (FAIL);
		i++;
	}
	ps->stack_a[n] = (int)x * sign;
	return (0);
}

int	check_isdigit(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == '-' && j == 0)
				j++;
			if (argv[i][j] < '0' || argv[i][j] > '9')
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
