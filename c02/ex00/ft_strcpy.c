char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char a[] = "42Kocaeli";
	char b[] = "Ecole";
    
	char *dest;
    char *src;
    dest = a;
    src = b;
	printf("%s", ft_strcpy(dest, src));
}
*/