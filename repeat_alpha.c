#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int count = 0;

	if(ac == 2)
	{
		while(av[1][i])
		{
			if(av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				count = av[1][i] - 97;
				while(count >= 0)
				{
					write(1, &av[1][i], 1);
					count--;
				}
			}
			else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				count = av[1][i] - 65;
				while(count >= 0)
				{
					write(1, &av[1][i], 1);
					count--;
				}
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
