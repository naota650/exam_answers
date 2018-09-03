#include <unistd.h>

static int match_bra(char a, char b)
{
	return ((a == '[' && b == ']') || (a == '{' && b == '}') \
			|| (a == '(' && b == ')'));
}

static int check_bra(char *str)
{
	int i = 0;
	int top = 0;
	int buff[4096];

	while(str[i])
	{
		if(str[i] == '(' || str[i] == '{' || str[i] == '[')
			buff[++top] = str[i];
		if (str[i] == ')' || str[i] == '}' || str[i] == ']')
			if (!match_bra(buff[top--], str[i]))
				return (0);
		i += 1;
	}
	return (!top);
}

int main(int ac, char **av)
{
	int i = 0;

	if(ac > 1)
	{
		while(--ac)
		{
		if (check_bra(av[++i]))
			write(1, "OK\n", 3);
		else
			write(1, "Error\n", 6);
		}
	}
	if (ac == 1)
		write(1, "\n", 1);
	return 0;
}
