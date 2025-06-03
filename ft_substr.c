#include <string.h>
#include <stdlib.h>

size_t ft_strlen(const char *s);

char *ft_substr(char const *s, unsigned int start, size_t len) {
	char *substr;

	if (!s)
		return NULL;

	size_t s_len = ft_strlen(s);

	if (s_len <= start) {
		substr = (char *)malloc(sizeof(char) * 1);
		if (!substr)
			return NULL;
		substr[0] = '\0';
		return substr;
	}

	else if (s_len - start < len) {
		len = s_len - start;
	}

	substr = (char *)malloc(sizeof(char) * (len + 1));

	if (!substr)
		return NULL;

	int i = 0;
	while (s && s[start + i] != '\0' && len) {
		substr[i] = s[start + i];
		i++;
		len--;
	}

	substr[i] = '\0';

	return substr;
}
