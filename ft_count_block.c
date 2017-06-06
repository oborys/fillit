int		ft_count_block(char *s, char c)
{
	int	i;
	int	h;
	int	bl;

	i = 0;
	h = 0;
	while (s[i])
	{
		if (s[i] == c)
			h++;
		i++;
	}
	bl = h / 4;
	return (bl);
}
