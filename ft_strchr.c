#include <string.h>

char *ft_strchr(const char *s, int c) {
	char *_s = NULL;

	if (c == 0 && *s == 0)
		return (char *)s;

	while (s && *s != 0) {
		if (*s == (char)c) {
			_s = (char *) s;
			return _s;
		}
		s++;
	}

	if (c == 0) {
		return (char *)s;
	}

	return NULL;
}
