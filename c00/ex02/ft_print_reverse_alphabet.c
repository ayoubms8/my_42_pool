#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	n;

	n = 122;
	while (n >= 97)
	{
		write(1, &n, 1);
		n--;
	}
}
