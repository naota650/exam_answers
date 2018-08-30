#include <unistd.h>
#include <stdio.h>

void	ft_strlen(char *str, int *i)
{
	for(*i = 0; str[*i]; *i += 1);
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		int i = 0;
		ft_strlen(av[1], &i);
		while(i > -1)
		{
			write(1, &av[1][i], 1);
			i--;
		}
		write(1, "\n", 1);
	}
	return 0;
}
