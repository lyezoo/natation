int		ft_count_if(char **tab, int(*f)(char*))
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) == 1)
			nb++;
		i++;
	}
	return (nb);
}
