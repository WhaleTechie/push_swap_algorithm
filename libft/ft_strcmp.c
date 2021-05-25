#include "libft.h"

int	ft_strcmp(char const *s1, char const *s2)
{
	while (*s1 || *s2)
		if (*s1++ != *s2++)
			return (*(s1 - 1) - *(s2 - 1));
	return (0);
}
