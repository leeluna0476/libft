/*
 *
     int
     isalpha(int c);

DESCRIPTION
     The isalpha() function tests for any character for which isupper(3) or islower(3) is true.  The value of the argument must be representable as an unsigned char or the value of EOF.

RETURN VALUES
     The isalpha() function returns zero if the character tests false and returns non-zero if the character tests true.
*/

# include "libft.h"

int	ft_isalpha(int c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
	{
		return 1;
	}
	return 0;
}
