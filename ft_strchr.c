#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	chr;

	chr = (char)c;
	while(*s)
	{
		if (*s == chr)
		{
			return (char *)s;
		}
		s++;
	}
	return (NULL);
}
