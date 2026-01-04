size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (s[i])
	{
        k = 0;
		while (reject[k])
		{
			if (reject[k] == s[i])
				return (i);
			k++;
		}
		i++;
	}
	return (i);
}