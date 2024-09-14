#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	real_dstsize;
	size_t	catdst;
	size_t	i;

	real_dstsize = ft_strlen(dst);
	if (real_dstsize < dstsize)
	{
		catdst = dstsize - 1;
		i = real_dstsize;
		while (*src && i < catdst)
		{
			dst[i] = *src++;
			i++;
		}
		dst[i] = '\0';
	}
	return (real_dstsize + ft_strlen(src));
}
