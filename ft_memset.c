/*
 *
     void *
     memset(void *b, int c, size_t len);

DESCRIPTION
     The memset() function writes len bytes of value c (converted to an unsigned char) to the string b.

RETURN VALUES
     The memset() function returns its first argument.
*/

# include "libft.h"

void*	ft_memset(void* b, int c, size_t len)
{
	unsigned char*	t;
	size_t			i;

	t = (unsigned char*)b;
	i = 0;
	while (i < len)
	{
		t[i] = c;
		i++;
	}
	return (b);
}
