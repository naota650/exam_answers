#include <unistd.h>

void ft_putstr(char *str, int i)
{
	for(i = 0; str[i]; i += 1) write(1, &str[i], 1);
}
