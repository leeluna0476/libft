#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	chr;
	size_t	i;

	chr = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == chr)
		{
			return ((char *)s + i);
		}
		++i;
	}
	if (c == 0)
	{
		return ((char *)s + i);
	}
	else
	{
		return (NULL);
	}
}
