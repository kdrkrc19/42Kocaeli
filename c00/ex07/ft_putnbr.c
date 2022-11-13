#include <unistd.h>

void	yazdir(char x)
{
	write (1, &x, 1);
}

void	ft_putnbr(int num)
{
	if (num == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (num < 0)
	{
		yazdir('-');
		num = -num;
	}
	if (num > 9)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
		yazdir(num + '0');
}

/*
int	main(void)
{
	ft_putnbr(13579);
}
*/