#include "libft.h"

static int	ft_atoimin(char *s)
{
	int	num;

	num = 0;
	while (*s)
	{
		num = num * 10 + (*s - 48);
		s++;
	}
	return ((int)(num));
}

int	ft_atoi_max(char *s)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(s);
	while (s[i] != '\0')
	{
		if (!(ft_isdigit(s[i])))
			return (-2);
		i++;
	}
	if (len == i && len < 10)
		return (ft_atoimin(s));
	else if (len == i && len >= 10)
		return (2147483647);
	else
		return (-2);
}
