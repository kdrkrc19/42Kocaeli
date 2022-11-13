char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char s[] = 42Kocaeli
	char d[] = "Ecole";

	char *dest;
	char *src;

	dest = d;
	src = s;	
	printf("%s", ft_strncpy(dest, src, 9));
}
*/