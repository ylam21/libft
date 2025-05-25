#include <string.h>

void *ft_memchr(const void *s, int c, size_t n) {
	unsigned char *_s = (unsigned char *)s;
	while (n--) {
		if (*_s++ == (unsigned char)c)
			return --_s;
	}
	return NULL;
}
