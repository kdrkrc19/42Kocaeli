#include <unistd.h>

void	ft_putchar(char c[])
{
	write(1, &c, 2);
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
