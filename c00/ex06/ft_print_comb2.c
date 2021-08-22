#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	put_2_digits(int n)
{
	int	mod;
	int	dec;

	mod = n / 10;
	dec = n % 10;
	ft_putchar(mod + 48);
	ft_putchar(dec + 48);
}

void	putall(int a, int b)
{
	put_2_digits(a);
	write(1, " ", 1);
	put_2_digits(b);
	if (a != 98 || b != 99)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	t[2];

	t[0] = 0;
	t[1] = 0;
	while (t[0] <= 99)
	{
		t[1] = 0;
		while (t[1] <= 99)
		{
			if (t[0] < t[1])
				putall(t[0], t[1]);
			t[1]++;
		}
		t[0]++;
	}
}
