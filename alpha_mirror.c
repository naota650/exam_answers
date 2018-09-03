#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	if(ac == 2)
	{
		for(int i = 0; av[1][i]; i++)
		{
			if(av[1][i] >= 'a' && av[1][i] <= 'z')
				ft_putchar('m' - (av[1][i] - 'n'));
			else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
				ft_putchar('M' - (av[1][i] - 'N'));
			else
				ft_putchar(av[1][i]);
		}
	}
	write(1, "\n", 1);
	return 0;
}
