#include <unistd.h>

void	printle(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	char	n1;
	char	n2;

	n1 = 0;
	n2 = 0;
	while (n1 <= 98)
	{
		n2 = (n1 + 1);
		while (n2 <= 99)
		{
			printle((n1 / 10) + '0');
			printle((n1 % 10) + '0');
			printle(' ');
			printle((n2 / 10) + '0');
			printle((n2 % 10) + '0');
			n2++;
			if (n1 != 98)
				write(1, ", ", 2);
		}
		n1++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
}
*/