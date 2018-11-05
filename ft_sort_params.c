#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_params(char **av)
{
	int i;
	int j;

	i = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
			ft_putchar(av[i][j++]);
		ft_putchar('\n');
		i++;
	}
}

void	ft_sort_params(char **av)
{
	int i;
	int j;
	char *tmp;

	i = 0;
	while (av[i + 1])
	{
		j = 0;
		while (av[i][j] == av[i + 1][j])
			j++;
		if (av[i][j] > av[i + 1][j])
		{
			tmp = av[i];
			av[i] = av[i + 1];
			av[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
	ft_print_params(av);
}

int		main(int ac, char **av)
{
	if (ac < 2)
		return (0);
	ft_sort_params(&av[1]);
	return (0);
}
