#include <string.h>

size_t ft_strlcat(char *dst, const char *src, size_t size) {
	while (*dst != 0) {
		dst++;
	}

	char *_src = (char *)src;

	while (*_src != 0) {
		*dst++ = *_src++;
	}

	*dst = 0;

	return size;
}
