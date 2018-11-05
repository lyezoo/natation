#include <unistd.h>

int		ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb <= 0 || nb > 46340)
		return (0);
	while (i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
