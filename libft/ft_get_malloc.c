#include "libft.h"
char	**get_malloc(int w_c)
{
	char	**new;

	new = (char **)malloc(sizeof(char *) * (w_c + 1));
	if (!(new))
		return (NULL);
	return (new);
}
