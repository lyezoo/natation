#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char x;

	x = 'a';
	while (x <= 'z')
		ft_putchar(x++);
}
