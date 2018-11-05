void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;

	i = 1;
	while (length > 0)
	{
		(*f)(tab[i++]);
		length--;
	}
}
