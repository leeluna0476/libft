#include "libft.h"

int	ft_isalpha(int c)
{
	return (((unsigned)c | 32) - 'a' < 26);
}
