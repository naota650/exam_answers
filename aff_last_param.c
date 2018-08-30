#include <unistd.h>
/*
void ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
int main(int ac, char **av)
{
	if (ac < 2)
		write(1, "\n", 1);
	else
		ft_putstr(av[ac-1]);
	return 0;
}*/

int main(int ac, char **av)
{
	if (ac > 1)
		for (int i = 0; av[ac-1][i]; i++)
			write(1, &av[ac-1][i], 1);
	write(1, "\n", 1);
	return (0);
}
