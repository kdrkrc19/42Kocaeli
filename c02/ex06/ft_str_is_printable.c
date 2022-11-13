int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_str_is_printable("ABDELKSDFDSSGSDFSCO?I340990%"));
	printf("\n%d", ft_str_is_printable("\n\t\v\f"));
}
*/