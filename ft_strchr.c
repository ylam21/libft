#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c) {
	char *_s = (char *)s;

	printf("%c\n",*_s);
	while (_s && *_s++ != 0) {
		if (*_s == c)
			return _s;
	}

	return NULL;
}
