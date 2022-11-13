int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0' )
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str [i] <= 'Z')
			|| (str [i] >= 'a' && str [i] <= 'z'))
			i++;
		else
			return (0);
	}	
	return (1);
}

/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_str_is_alpha("asdfg"));
	printf("\n%d", ft_str_is_alpha("asd15ghg"));
	printf("\n%d", ft_str_is_alpha("-_12345gfdsg"));
}
*/