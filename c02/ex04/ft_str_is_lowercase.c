int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a') || (str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_str_is_lowercase("sakdfkgj"));
    printf("\n%d", ft_str_is_lowercase("Aaabchdsd"));
    printf("\n%d", ft_str_is_lowercase("3,4-gfdgjskdA"));
}
*/