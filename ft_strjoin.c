#include <string.h>
#include <stdlib.h>

size_t ft_strlen(const char *s);

char *ft_strjoin(char const *s1, char const *s2) {
	size_t s1_len = ft_strlen(s1);
	size_t s2_len = ft_strlen(s2);

	char *join = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));

	if (!join)
		return NULL;

	size_t pos = 0;
	while (pos < s1_len) {
		join[pos] = s1[pos];
		pos++;
	}

	pos = 0;
	while (pos < s2_len) {
		join[s1_len + pos] = s2[pos];
		pos++;
	}

	join[s1_len + pos] = '\0';

	return join;
}
