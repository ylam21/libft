#include <string.h>
#include <stdlib.h>

size_t ft_strlen(const char *s);

char *ft_strdup(const char *s) {
	size_t len = ft_strlen(s);

	char *dup = (char *)malloc(sizeof(char) * (len + 1));

	int i = 0;
	while (s && s[i] != '\0') {
		dup[i] = s[i];
		i++;
	}

	dup[i] = '\0';

	return dup;
}
