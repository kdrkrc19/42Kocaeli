void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	temp;

	index = 0;
	while (size > 0)
	{
		if (tab[index] >= tab[index + 1])
		{
			temp = tab[index];
			tab[index] = tab[index + 1];
			tab[index + 1] = temp;
		}
		index++;
		size--;
	}
}
