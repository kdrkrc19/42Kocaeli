int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0') || (str[i] > '9'))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_str_is_numeric("5642398"));
	printf("\n%d", ft_str_is_numeric("65421k65412"));
	printf("\n%d", ft_str_is_numeric("dfslgjdsf-_sdg12"));
}
*/