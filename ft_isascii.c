/*
 *
       int
       isascii(int c);

DESCRIPTION
       The isascii() function shall test whether c is a 7-bit US-ASCII
       character code.

       The isascii() function is defined on all integer values.

RETURN VALUE
       The isascii() function shall return non-zero if c is a 7-bit US-
       ASCII character code between 0 and octal 0177 inclusive;
       otherwise, it shall return 0.
*/

# include "libft.h"

// d: 128 b: 1000 0000
// ASCII character code: 0000 0000 ~ 0111 1111

int	ft_isascii(int c)
{
	return ((int)!(c & 128));
}
