#include "fillit.h"

void	*ft_memset(void *str, int c, size_t len)
{
	int				i;
	unsigned char	*s;

	s = str;
	i = 0;
	while (len > 0)
	{
		s[i] = (unsigned char)c;
		i++;
		len--;
	}
	return (str);
}
