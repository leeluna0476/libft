#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	chr;

	chr = (char)c;
	while (*s != chr)
	{
		if (!*s)
		{
			return (NULL);
		}
		++s;
	}
	return ((char *)s);
}