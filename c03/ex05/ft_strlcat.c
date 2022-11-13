int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlength;
	unsigned int	slength;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	dlength = j;
	slength = ft_strlen(src);
	if (size == 0 || size <= dlength)
		return (slength + size);
	while (src [i] != '\0' && i < size - dlength -1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlength + slength);
}

/*
#include <stdio.h>
int main (void)
{
	char src[] = "Ecole 42 Kocaeli Ecole";
    char dest [] = "11 11 2022";
    printf("%i \n", ft_strlcat(dest, src, 20));
    printf("%s \n", dest);
}	
*/