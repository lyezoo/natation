#include <unistd.h>

void	display_file(char *av)
{
	open(av);
	close();
}

int		ft_strcmp(char *s1, char *s2);

int		find_file(char *av)
{
	int i;
	int j;
	char str[50];

	i = 0;
	j = 0;
	while (str[i])
	{
		while (ft_strcmp(av[1], str[j]) != 0 && str[j])
			j++;
		i++;
	}
	return (1);
}

int		main(int ac, char **av)
{
	if (ac < 2)
		write(1, "File name missing.\n", 19);
	else if (ac > 2)
		write(1, "Too many arguments.\n", 20);
	if (find_file(av[1]))
		display_file(av[1]);
	return (0);
}
