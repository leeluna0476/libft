#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	
	chr = (char)c;
	i = ft_strlen(s);
	while (*(s + i) != c)
	{
		if (!i)
		{
			return (NULL);
		}
		--i;
	}
	return ((char *)s + i);
}
