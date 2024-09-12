/*
 *
     int
     isprint(int c);

DESCRIPTION
     The isprint() function tests for any printing character, including space (‘ ’).  The value of the argument must be representable as an unsigned char or the value of EOF.

	 31 < c < 127

RETURN VALUES
     The isprint() function returns zero if the character tests false and returns non-zero if the character tests true.
*/

# include "libft.h"

int	ft_isprint(int c)
{
	return ((int)((unsigned)c - 32 < 95));
}
