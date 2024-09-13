#include "libft.h"

// d: 128 b: 1000 0000
// ASCII character code: 0000 0000 ~ 0111 1111

int	ft_isascii(int c)
{
	return (!(c & 128));
}
