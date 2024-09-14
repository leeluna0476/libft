#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	cpsize;
	size_t	i;

	if (dstsize != 0)
	{
		cpsize = dstsize - 1;
		i = 0;
		while (src[i] && i < cpsize)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
