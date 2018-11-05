#include <unistd.h>

int		ft_recursive_factoriel(int nb)
{
	if (nb > 12 || nb < 0)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	else
		nb = nb * ft_recursive_factoriel(nb - 1);
	return (nb);
}
