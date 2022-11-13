int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A') || (str[i] > 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main()
{
       printf("%d", ft_str_is_uppercase("ASFKMH"));
       printf("\n%d", ft_str_is_uppercase("AASDKMHaI"));
       printf("\n%d", ft_str_is_uppercase("-_56421SDAABCa"));
}
*/