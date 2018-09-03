#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int		count_words(char *str)
{
	int i = 0;
	int count = 0;
	while(str[i])
	{
		while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			count++;
			while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
				i++;
		}
	}
	return (count);
}

char	*malloc_word(char *str)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}


char	**ft_split(char *str)
{
int		words;
	char	**tab;
	int		i;

	words = count_words(str);
	tab = (char **)malloc(sizeof(char*) * (words + 1));
	i = 0;
	while (*str)
	{
		while (*str && (*str == ' ' || *str == '\n' || *str == '\t'))
			str++;
		if (*str && *str != ' ' && *str != '\n' && *str != '\t')
		{
			tab[i] = malloc_word(str);
			i++;
			while (*str && *str != ' ' && *str != '\n' && *str != '\t')
				str++;
		}
	}
	tab[i] = NULL;
	return (tab);
}
