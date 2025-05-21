#include <string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size) {
	size_t len = 0;

	if (!size)
		return len;

	while (size--) {
		*dst++ = *src++;
		len++;
	}

	*dst = 0;
	return len;
}

