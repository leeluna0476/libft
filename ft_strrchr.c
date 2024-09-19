#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	chr;
	size_t	slen;
	size_t	i;

	slen = ft_strlen(s);
	if (c == 0)
	{
		return ((char *)s + slen);
	}
	else
	{
		chr = (char)c;
		i = slen;
		while (i > 0)
		{
			--i;
			if (s[i] == chr)
			{
				return ((char *)s + i);
			}
		}
		return (NULL);
	}
}
