#include <stdlib.h>

static char *ft_getword(char const *s, char c, int *start) {
	int i;

	while (s[*start] && s[*start] == c) {
		(*start)++;
	}

	i = *start;
	int len = 0;

	while (s[i] != c && s[i] != '\0') {
		i++;
		len++;
	}

	char *word = (char *)malloc(sizeof(char) * (len + 1));

	if (!word)
		return NULL;

	i = 0;
	while (i < len) {
		word[i] = s[*start + i];
		i++;
	}

	word[i] = '\0';

	*start = *start + len;

	return word;
}

static int ft_getwordcount(char const *s, char c) {
	int count = 0;
	int inword = 0;

	int i = 0;
	while (s && s[i] != '\0') {
		if (s[i] != c && inword == 0) {
			i++;
			count++;
			inword = 1;
			continue;
		}
		else if (s[i] == c && inword == 0) {
			i++;
			continue;
		}
		else if (s[i] != c && inword) {
			i++;
			continue;
		}
		else if (s[i] == c && inword) {
			i++;
			inword = 0;
			continue;
		}
	}

	return count;
}

char **ft_split(char const *s, char c)
{
	int word_count = ft_getwordcount(s,c);
	char **str_arr = (char **)malloc(sizeof(char *) * (word_count + 1));

	if (!str_arr)
		return NULL;

	int start = 0;

	int i = 0;
	while (i < word_count) {
		str_arr[i] = ft_getword(s,c,&start);

		if (!str_arr[i]) {
			free(str_arr[i]);
			return NULL;
		}

		i++;
	}

	str_arr[i] = NULL;

	return str_arr;
}

