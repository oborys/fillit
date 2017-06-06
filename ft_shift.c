#include "fillit.h"

char		*ft_shift_up(char *s)
{
	int		k;

	while (s[0] == '.' && s[1] == '.' && s[2] == '.' && s[3] == '.')
	{
		k = 0;
		while (s[k])
		{
			while (s[k] != '#' && s[k])
				k++;
			while (s[k] != '.' && s[k] && s[k] != '\n')
			{
				s[k - 5] = s[k];
				s[k] = '.';
				k++;
			}
		}
	}
	return (s);
}

char		*ft_shift_left(char *s)
{
	int		k;

	while (s[0] == '.' && s[5] == '.' && s[10] == '.' && s[15] == '.')
	{
		k = 0;
		while (s[k])
		{
			while (s[k] != '#' && s[k])
				k++;
			while (s[k] != '.' && s[k] && s[k] != '\n')
			{
				s[k - 1] = s[k];
				s[k] = '.';
				k++;
			}
		}
	}
	return (s);
}

char		*ft_shift(char *s)
{
	ft_shift_left(s);
	ft_shift_up(s);
	return (s);
}
