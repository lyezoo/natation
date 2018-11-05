#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	i = 0;
	tab = NULL;
	if (max <= min)
		return (NULL);
	if (!(tab = (int *)malloc(sizeof(int) * (max - min))))
		return (NULL);
	while (min < max)
		tab[i++] = min++;
	return (tab);
}
