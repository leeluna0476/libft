/*
 *
     void
     bzero(void *s, size_t n);

DESCRIPTION
     The bzero() function writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing.
*/

# include "libft.h"

void*	ft_bzero(void* s, size_t n)
{
	unsigned char*	t;
	size_t			i;

	t = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		t[i] = 0;
		i++;
	}
	return (s);
}
