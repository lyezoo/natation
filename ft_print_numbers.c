#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char x;

	x = '0';
	while (x <= '9')
		ft_putchar(x++);
}
